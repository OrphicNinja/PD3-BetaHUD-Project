#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "SBZPerceptionController.generated.h"

class USBZAIVisualDetectionComponent;

UCLASS(Blueprintable)
class ASBZPerceptionController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIVisualDetectionComponent* VisualDetectionComponent;
    
public:
    ASBZPerceptionController();
};

