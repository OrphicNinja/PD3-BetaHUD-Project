#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "SBZAIAction.h"
#include "SBZAIAction_GetDownOnGround.generated.h"

class ASBZAICharacter;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIAction_GetDownOnGround : public USBZAIAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer QueueGoDownTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* AICharacterOwner;
    
public:
    USBZAIAction_GetDownOnGround();
};

