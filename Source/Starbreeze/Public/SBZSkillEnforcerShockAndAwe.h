#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "SBZSkillData.h"
#include "SBZSkillEnforcerShockAndAwe.generated.h"

UCLASS(Blueprintable)
class USBZSkillEnforcerShockAndAwe : public USBZSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AffectedAITypes;
    
    USBZSkillEnforcerShockAndAwe();
};

