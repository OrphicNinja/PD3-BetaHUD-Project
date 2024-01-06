#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SBZMaskPartConfigGroup.h"
#include "SBZStandaloneMaskDisplayDebug.generated.h"

class ASBZMask;
class USBZMaskPreconfigData;
class USBZModularPartSlotBase;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZStandaloneMaskDisplayDebug : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMaskPreconfigData* UserMaskData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USBZModularPartSlotBase*, FSBZMaskPartConfigGroup> ModDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprayCanTextureSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorIndexTextureSize;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZMask* SpawnedMask;
    
public:
    ASBZStandaloneMaskDisplayDebug();
    UFUNCTION(BlueprintCallable)
    void UpdateSprayCanTextureSizePlus();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSprayCanTextureSizeMinus();
    
    UFUNCTION(BlueprintCallable)
    void ToggleMaskStrapVisibility();
    
};

