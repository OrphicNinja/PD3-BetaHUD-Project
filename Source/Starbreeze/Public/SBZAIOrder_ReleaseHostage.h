#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SBZAIOrder.h"
#include "SBZAIOrder_ReleaseHostage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_ReleaseHostage : public USBZAIOrder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DespawnTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasTraded;
    
public:
    USBZAIOrder_ReleaseHostage();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetHostageStateChanged(uint8 NewHostageState);
    
};

