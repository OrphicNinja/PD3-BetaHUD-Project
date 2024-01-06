#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZAllowedStanceTransition.h"
#include "SBZStanceTransitionDataAsset.generated.h"

UCLASS(Blueprintable)
class USBZStanceTransitionDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAllowedStanceTransition> AllowedStanceTransitions;
    
public:
    USBZStanceTransitionDataAsset();
};

