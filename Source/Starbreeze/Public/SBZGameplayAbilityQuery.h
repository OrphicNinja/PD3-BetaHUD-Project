#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZGameplayTagContainerComparison.h"
#include "SBZGameplayAbilityQuery.generated.h"

UCLASS(Blueprintable, Const, MinimalAPI)
class USBZGameplayAbilityQuery : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameplayTagContainerComparison> TagContainersQuery;
    
    USBZGameplayAbilityQuery();
};

