#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimNode_SkeletalControlBase -FallbackName=AnimNode_SkeletalControlBase
#include "SBZBoneLocker.h"
#include "SBZAnimNode_BoneLocker.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAnimNode_BoneLocker : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBoneLocker> BoneLockers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComponentSpace;
    
    FSBZAnimNode_BoneLocker();
};

