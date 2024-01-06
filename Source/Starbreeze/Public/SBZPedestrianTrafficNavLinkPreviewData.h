#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZPedestrianTrafficNavLinkPreviewData.generated.h"

class UAnimationAsset;
class USkeletalMesh;

UCLASS(Blueprintable)
class USBZPedestrianTrafficNavLinkPreviewData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* Animation;
    
    USBZPedestrianTrafficNavLinkPreviewData();
};

