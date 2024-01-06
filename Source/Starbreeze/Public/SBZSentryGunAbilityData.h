#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Templates/SubclassOf.h"
#include "SBZSentryGunAbilityData.generated.h"

class USBZGameplayAbility;

UCLASS(Blueprintable)
class USBZSentryGunAbilityData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USBZGameplayAbility>> AbilityArray;
    
    USBZSentryGunAbilityData();
};

