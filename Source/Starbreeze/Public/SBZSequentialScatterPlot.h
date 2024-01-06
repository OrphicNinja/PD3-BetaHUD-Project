#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "SBZSequentialScatterPlot.generated.h"

USTRUCT(BlueprintType)
struct FSBZSequentialScatterPlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> Points;
    
    STARBREEZE_API FSBZSequentialScatterPlot();
};

