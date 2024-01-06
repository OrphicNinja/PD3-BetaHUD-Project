#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationBudgetAllocator -ObjectName=SkeletalMeshComponentBudgeted -FallbackName=SkeletalMeshComponentBudgeted
#include "SBZSkeletalMeshComponentBudgeted.generated.h"

class USBZCapsuleShadowingData;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZSkeletalMeshComponentBudgeted : public USkeletalMeshComponentBudgeted {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCapsuleShadowingData* CapsuleShadowingData;
    
public:
    USBZSkeletalMeshComponentBudgeted();
};

