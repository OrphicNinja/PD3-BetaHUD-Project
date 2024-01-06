#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimNode_SkeletalControlBase -FallbackName=AnimNode_SkeletalControlBase
#include "SBZBoneRefArrayParam.h"
#include "SBZAnimNode_BoneKeepRefPose.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAnimNode_BoneKeepRefPose : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBoneRefArrayParam BonesToConstrain;
    
    FSBZAnimNode_BoneKeepRefPose();
};

