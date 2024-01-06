#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ESBZMetaRequestResult.h"
#include "OnPlayerLoadoutConfigChangedDelegate.h"
#include "SBZOnActiveLoadoutIndexChangedDelegate.h"
#include "SBZPlayerLoadoutConfig.h"
#include "SBZLoadoutManager.generated.h"

class USBZLoadoutManager;

UCLASS(Blueprintable)
class USBZLoadoutManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnActiveLoadoutIndexChanged OnActiveLoadoutIndexChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLoadoutConfigChanged OnLocalPlayerLoadoutChanged;
    
    USBZLoadoutManager();
    UFUNCTION(BlueprintCallable)
    void SetLoadoutAtIndex(int32 LoadoutIndex, const FSBZPlayerLoadoutConfig& InLoadoutConfig);
    
    UFUNCTION(BlueprintCallable)
    ESBZMetaRequestResult SetActiveLoadoutIndex(int32 ActiveLoadoutIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZPlayerLoadoutConfig> GetPlayerLoadouts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZLoadoutManager* GetLoadoutManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveLoadoutIndex() const;
    
};

