#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SBZGameplayAbility.h"
#include "SBZSkillTriggeredHurtReactionAbility.generated.h"

class ASBZPlayerCharacter;

UCLASS(Blueprintable)
class USBZSkillTriggeredHurtReactionAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwnerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SkillTag;
    
public:
    USBZSkillTriggeredHurtReactionAbility();
};

