#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "SBZEnvQueryTest_VisuallyDetected.generated.h"

UCLASS(Blueprintable)
class USBZEnvQueryTest_VisuallyDetected : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCriminalsOnly;
    
public:
    USBZEnvQueryTest_VisuallyDetected();
};

