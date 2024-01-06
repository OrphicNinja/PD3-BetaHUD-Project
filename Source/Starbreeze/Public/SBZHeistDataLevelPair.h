#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "SBZHeistDataLevelPair.generated.h"

class UPD3HeistDataAsset;

USTRUCT(BlueprintType)
struct FSBZHeistDataLevelPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPD3HeistDataAsset* HeistData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath LevelPath;
    
    STARBREEZE_API FSBZHeistDataLevelPair();
};

