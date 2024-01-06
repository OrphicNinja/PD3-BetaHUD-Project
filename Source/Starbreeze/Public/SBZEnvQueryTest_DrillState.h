#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "ESBZDrillState.h"
#include "SBZEnvQueryTest_DrillState.generated.h"

UCLASS(Blueprintable)
class USBZEnvQueryTest_DrillState : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchNonDrills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZDrillState> MatchState;
    
public:
    USBZEnvQueryTest_DrillState();
};

