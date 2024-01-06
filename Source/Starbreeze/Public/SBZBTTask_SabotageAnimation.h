#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "SBZSabotageAnimationData.h"
#include "SBZBTTask_SabotageAnimation.generated.h"

class UAnimMontage;
class UBehaviorTreeComponent;

UCLASS(Blueprintable)
class USBZBTTask_SabotageAnimation : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSabotageAnimationData> SabotageAnimations;
    
public:
    USBZBTTask_SabotageAnimation();
private:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bIsInterrupted, UBehaviorTreeComponent* OwnerComp);
    
};

