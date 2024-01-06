#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "SBZHUDBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASBZHUDBase : public AHUD {
    GENERATED_BODY()
public:
    ASBZHUDBase();
private:
    UFUNCTION(BlueprintCallable)
    void DelayedHudInitizalize();
    
};

