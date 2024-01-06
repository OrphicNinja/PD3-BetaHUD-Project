#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EBTNodeResult -FallbackName=EBTNodeResult
#include "SBZAIScorer.h"
#include "SBZAIUtilityScorer.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USBZAIUtilityScorer : public USBZAIScorer {
    GENERATED_BODY()
public:
    USBZAIUtilityScorer();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeselectedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivatedBP(TEnumAsByte<EBTNodeResult::Type> NodeResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivatedBP();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalcScoreBP() const;
    
};

