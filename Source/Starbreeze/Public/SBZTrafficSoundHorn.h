#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "SBZTrafficSoundHorn.generated.h"

USTRUCT(BlueprintType)
struct FSBZTrafficSoundHorn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval TrafficLightBaseTimer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval TrafficLightQueueAddition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrafficLightQueueStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrafficLightChance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval StopWaitTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopWaitChance;
    
    STARBREEZE_API FSBZTrafficSoundHorn();
};

