#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "SBZBTDecorator_IsEquippedAtIndex.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_IsEquippedAtIndex : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
public:
    USBZBTDecorator_IsEquippedAtIndex();
};

