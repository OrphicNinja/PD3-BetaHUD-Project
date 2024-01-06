#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISense -FallbackName=AISense
#include "SBZAITouchEvent.h"
#include "SBZAISense_Touch.generated.h"

UCLASS(Blueprintable)
class USBZAISense_Touch : public UAISense {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZAITouchEvent> RegisteredEvents;
    
public:
    USBZAISense_Touch();
};

