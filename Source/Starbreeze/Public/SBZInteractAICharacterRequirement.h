#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "SBZBaseInteractRequirement.h"
#include "SBZInteractAICharacterRequirement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZInteractAICharacterRequirement : public USBZBaseInteractRequirement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockHumanShieldTagContainer;
    
public:
    USBZInteractAICharacterRequirement();
};

