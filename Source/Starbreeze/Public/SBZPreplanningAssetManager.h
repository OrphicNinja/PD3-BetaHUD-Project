#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ESBZMetaRequestResult.h"
#include "SBZPreplanningAssetManager.generated.h"

class USBZPreplanningAssetData;
class USBZPreplanningAssetManager;

UCLASS(Blueprintable)
class USBZPreplanningAssetManager : public UObject {
    GENERATED_BODY()
public:
    USBZPreplanningAssetManager();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZPreplanningAssetManager* GetPreplanningAssetManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZPreplanningAssetData* GetAssetBySku(const FString& InAssetSku) const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeUserEntitlementSuccess(ESBZMetaRequestResult Result);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeUserEntitlementError(ESBZMetaRequestResult Result);
    
};

