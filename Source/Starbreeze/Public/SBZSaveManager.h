#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZSaveManagerInterface.h"
#include "SBZSaveManager.generated.h"

class USBZProgressionSaveGame;
class USBZSaveManager;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSaveManager : public UObject, public ISBZSaveManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZProgressionSaveGame* ProgressionSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZProgressionSaveGame* DefaultProgressionSaveGame;
    
public:
    USBZSaveManager();
    UFUNCTION(BlueprintCallable)
    void UpdateLoadoutInLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZProgressionSaveGame* GetProgressionSaveGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZSaveManager* Get(const UObject* WorldContextObject);
    
    
    // Fix for true pure virtual functions not being implemented
};

