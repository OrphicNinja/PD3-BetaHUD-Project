#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZUE4StatsProfiler.generated.h"

class USBZUE4StatsProfiler;

UCLASS(Blueprintable)
class STARBREEZE_API USBZUE4StatsProfiler : public UObject {
    GENERATED_BODY()
public:
    USBZUE4StatsProfiler();
private:
    UFUNCTION(BlueprintCallable)
    void OnExitedActionPhase();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredActionPhase();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZUE4StatsProfiler* GetUE4StatsProfiler(const UObject* WorldContextObject);
    
};

