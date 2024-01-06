#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZDifficultyConfiguration.h"
#include "SBZMetaEventData.h"
#include "SBZNewsFeedList.h"
#include "SBZTitleData.h"
#include "SBZGameRecordsManager.generated.h"

class USBZGameRecordsManager;

UCLASS(Blueprintable)
class STARBREEZE_API USBZGameRecordsManager : public UObject {
    GENERATED_BODY()
public:
    USBZGameRecordsManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZTitleData GetTitleData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZNewsFeedList GetNewsFeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZMetaEventData> GetMetaEventsData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZDifficultyConfiguration> GetDifficultyConfiguration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZGameRecordsManager* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void CacheNewsFeed(const FSBZNewsFeedList& inNewsFeed);
    
    UFUNCTION(BlueprintCallable)
    void CacheDifficultyConfiguration(const TArray<FSBZDifficultyConfiguration>& InConfiguration);
    
};

