#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimNode_SkeletalControlBase -FallbackName=AnimNode_SkeletalControlBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "SBZAnimNode_BuiltInAnimMontagePlayer.generated.h"

class USBZBuiltInAnimMontagesHandler;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAnimNode_BuiltInAnimMontagePlayer : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneReference> BonesToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBuiltInAnimMontagesHandler* AnimMontagesHandler;
    
    FSBZAnimNode_BuiltInAnimMontagePlayer();
};

