#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimNode_SkeletalControlBase -FallbackName=AnimNode_SkeletalControlBase
#include "SBZAnimNode_ChangeChamberAnimatedBullet.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAnimNode_ChangeChamberAnimatedBullet : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneToAnimateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimatedBoneName;
    
    FSBZAnimNode_ChangeChamberAnimatedBullet();
};

