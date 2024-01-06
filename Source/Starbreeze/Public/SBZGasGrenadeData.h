#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ESBZDifficulty.h"
#include "SBZFragGrenadeData.h"
#include "SBZGasGrenadeData.generated.h"

class UCurveFloat;

UCLASS(Abstract, Blueprintable)
class USBZGasGrenadeData : public USBZFragGrenadeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AddedTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> DropDamageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DropDamageModifierCurve;
    
    USBZGasGrenadeData();
};

