#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetData -FallbackName=GameplayAbilityTargetData
#include "SBZHackableToolTargetData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZHackableToolTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* HackableActor;
    
public:
    STARBREEZE_API FSBZHackableToolTargetData();
};

