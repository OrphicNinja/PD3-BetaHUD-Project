#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetData -FallbackName=GameplayAbilityTargetData
#include "SBZPlaceToolTargetData.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FSBZPlaceToolTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* AttachParent;
    
public:
    STARBREEZE_API FSBZPlaceToolTargetData();
};

