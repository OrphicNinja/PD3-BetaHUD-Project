#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "SBZHumanShieldDirection.h"
#include "SBZHumanShieldData.generated.h"

UCLASS(Blueprintable)
class USBZHumanShieldData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZHumanShieldDirection> Directions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBufferArray[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowAnyDirectionTags;
    
    USBZHumanShieldData();
};

