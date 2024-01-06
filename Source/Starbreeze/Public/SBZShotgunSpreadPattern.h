#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "SBZShotgunSpreadPattern.generated.h"

USTRUCT(BlueprintType)
struct FSBZShotgunSpreadPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> PelletSpreadAngles;
    
    STARBREEZE_API FSBZShotgunSpreadPattern();
};

