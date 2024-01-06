#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "SBZBTTask_WaitForMessage.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_WaitForMessage : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Message;
    
public:
    USBZBTTask_WaitForMessage();
};

