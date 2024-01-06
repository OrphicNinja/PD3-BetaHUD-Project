#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SBZInventoryBaseData.h"
#include "SBZPreplanningAssetData.generated.h"

class UObject;

UCLASS(Blueprintable)
class USBZPreplanningAssetData : public USBZInventoryBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> Tags;
    
    USBZPreplanningAssetData();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ApplyPreplanningAsset(UObject* WorldContextObject) const;
    
};

