#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "SBZRefPoseConstraint.generated.h"

USTRUCT(BlueprintType)
struct FSBZRefPoseConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference TargetBone;
    
    STARBREEZE_API FSBZRefPoseConstraint();
};

