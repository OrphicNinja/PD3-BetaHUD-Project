#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SBZSkillData.h"
#include "Templates/SubclassOf.h"
#include "SBZSkillScramblerKineticShortCircuit.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class USBZSkillScramblerKineticShortCircuit : public USBZSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ScramblerTargetEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ScramblerDurationTag;
    
    USBZSkillScramblerKineticShortCircuit();
};

