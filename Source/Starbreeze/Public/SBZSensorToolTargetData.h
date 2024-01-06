#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetData -FallbackName=GameplayAbilityTargetData
#include "SBZSensorToolTargetData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZSensorToolTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ToggledActor;
    
public:
    STARBREEZE_API FSBZSensorToolTargetData();
};

