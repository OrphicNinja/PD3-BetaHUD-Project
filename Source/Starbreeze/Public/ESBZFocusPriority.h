#pragma once
#include "CoreMinimal.h"
#include "ESBZFocusPriority.generated.h"

UENUM(BlueprintType)
enum class ESBZFocusPriority : uint8 {
    AI = 0x3,
    Attack = 0x4,
    Override = 0x5,
};

