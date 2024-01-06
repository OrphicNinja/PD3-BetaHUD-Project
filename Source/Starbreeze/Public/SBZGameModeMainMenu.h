#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SBZUtilityPlugin -ObjectName=SBZGameModeBase -FallbackName=SBZGameModeBase
#include "ESBZMainMenuState.h"
#include "SBZGameModeMainMenu.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class ASBZGameModeMainMenu : public ASBZGameModeBase {
    GENERATED_BODY()
public:
    ASBZGameModeMainMenu();
    UFUNCTION(BlueprintCallable)
    void SetMainMenuState(ESBZMainMenuState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZMainMenuState GetMainMenuState() const;
    
};

