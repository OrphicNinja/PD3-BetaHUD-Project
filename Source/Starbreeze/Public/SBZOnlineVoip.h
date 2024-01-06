#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZOnlineVoip.generated.h"

class USBZOnlineVoip;

UCLASS(Blueprintable)
class USBZOnlineVoip : public UObject {
    GENERATED_BODY()
public:
    USBZOnlineVoip();
    UFUNCTION(BlueprintCallable)
    void SetCaptureDevice(const FString& DeviceName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleStateEntered(FName NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSelectedCaptureDevice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZOnlineVoip* GetSBZOnlineVoip(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetCaptureDevices();
    
    UFUNCTION(BlueprintCallable)
    float GetCaptureDeviceAmplitude();
    
};

