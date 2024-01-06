#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SBZAIOrder.h"
#include "SBZAIOrder_BrokenCamera.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_BrokenCamera : public USBZAIOrder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ProjectExtent;
    
public:
    USBZAIOrder_BrokenCamera();
};

