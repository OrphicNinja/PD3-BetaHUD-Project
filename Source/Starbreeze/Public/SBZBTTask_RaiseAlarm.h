#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "SBZBTTask_RaiseAlarm.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_RaiseAlarm : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RaiseAlarmTime;
    
public:
    USBZBTTask_RaiseAlarm();
};

