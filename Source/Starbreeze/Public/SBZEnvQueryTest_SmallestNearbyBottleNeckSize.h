#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "SBZEnvQueryTest_SmallestNearbyBottleNeckSize.generated.h"

UCLASS(Blueprintable)
class USBZEnvQueryTest_SmallestNearbyBottleNeckSize : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToCheck;
    
public:
    USBZEnvQueryTest_SmallestNearbyBottleNeckSize();
};

