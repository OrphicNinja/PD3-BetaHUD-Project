#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ChallengeLocalizationEntry.h"
#include "StatLocalizationEntry.h"
#include "SBZChallengesLocalizationLibrary.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZChallengesLocalizationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZChallengesLocalizationLibrary();
    UFUNCTION(BlueprintCallable)
    static void WriteEntriesToStringTablesCSVs(const TArray<FChallengeLocalizationEntry>& ChallengeEntries, const TArray<FStatLocalizationEntry>& StatEntries, const FString& OutputCSVPathChallenges, const FString& OutputCSVPathChallengeStats);
    
    UFUNCTION(BlueprintCallable)
    static void ExtractEntriesFromSpreadsheetCSVs(TArray<FChallengeLocalizationEntry>& ChallengeLocalizationEntries, TArray<FStatLocalizationEntry>& StatLocalizationEntries, const TArray<FString>& InputSpreadsheetCSVPaths);
    
};

