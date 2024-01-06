#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "SBZHeistDataLevelPair.h"
#include "SBZHeistDeveloperSettings.generated.h"

class UPD3HeistDataAsset;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class USBZHeistDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZHeistDataLevelPair> HeistLevelPairArray;
    
public:
    USBZHeistDeveloperSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPD3HeistDataAsset* GetHeistDataFromLevelShortName(const FString& ShortName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPD3HeistDataAsset* GetHeistDataFromLevelPath(FSoftObjectPath LevelPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FSBZHeistDataLevelPair> GetAllHeistData();
    
};

