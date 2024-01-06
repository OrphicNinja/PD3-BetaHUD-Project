#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SBZAIOrder.h"
#include "SBZAIOrder_SecureBag.generated.h"

class AActor;
class USBZAIOrder_DropOfBag;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_SecureBag : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIOrder_DropOfBag* DropOfBagActionOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* BagActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
public:
    USBZAIOrder_SecureBag();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterAnimEventActive(const FGameplayTag& EventTag, bool bActive);
    
};

