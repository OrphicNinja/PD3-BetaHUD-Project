#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SBZAISightBlockerInterface.generated.h"

UINTERFACE(Blueprintable)
class STARBREEZE_API USBZAISightBlockerInterface : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API ISBZAISightBlockerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSightModifier(const FVector& Start, const FVector& End) const;
    
};

