#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZPlayerStatisticsValue.h"
#include "SBZWeaponProgressionStats.h"
#include "SBZPlayerStatisticsData.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlayerStatisticsData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZPlayerStatisticsValue> StatCodeToValueMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZWeaponProgressionStats> ItemProgressionLevelMap;
    
    USBZPlayerStatisticsData();
};

