#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetData -FallbackName=GameplayAbilityTargetData
#include "SBZCuttableTargetData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZCuttableTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CuttableActor;
    
public:
    STARBREEZE_API FSBZCuttableTargetData();
};

