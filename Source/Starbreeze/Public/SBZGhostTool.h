#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ESBZPlacementState.h"
#include "SBZGhostTool.generated.h"

class USBZOutlineAsset;
class USBZOutlineComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASBZGhostTool : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* OutlineAsset;
    
public:
    ASBZGhostTool();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGhostToolStateChanged(ESBZPlacementState NewPlacementState);
    
};

