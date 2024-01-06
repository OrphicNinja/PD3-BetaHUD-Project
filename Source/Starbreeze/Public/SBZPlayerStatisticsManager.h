#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "SBZLevelTimesStruct.h"
#include "SBZPlayerStatisticsManagerInterface.h"
#include "SBZPlayerStatisticsManager.generated.h"

class USBZPlayerStatisticsData;
class USBZPlayerStatisticsManager;
class USBZServerStatBatcher;

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlayerStatisticsManager : public UObject, public ISBZPlayerStatisticsManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerStatisticsData* PlayerStatisticsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, USBZPlayerStatisticsData*> ServerPlayerStatisticsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZServerStatBatcher* ServerStatBatcher;
    
public:
    USBZPlayerStatisticsManager();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZPlayerStatisticsManager* GetPlayerStatisticsManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZLevelTimesStruct> GetHeistBestTimes(FSoftObjectPath LevelPath);
    
    
    // Fix for true pure virtual functions not being implemented
};

