#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "SBZEnvQueryTest_TargetAggroDamage.generated.h"

UCLASS(Blueprintable)
class USBZEnvQueryTest_TargetAggroDamage : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilForgetDamage;
    
public:
    USBZEnvQueryTest_TargetAggroDamage();
};

