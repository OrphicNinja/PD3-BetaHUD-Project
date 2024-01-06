#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZWeaponProgressionManager.generated.h"

class USBZWeaponProgressionManager;

UCLASS(Blueprintable)
class USBZWeaponProgressionManager : public UObject {
    GENERATED_BODY()
public:
    USBZWeaponProgressionManager();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZWeaponProgressionManager* GetWeaponProgressionManager(const UObject* WorldContextObject);
    
};

