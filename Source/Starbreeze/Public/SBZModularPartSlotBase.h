#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "Templates/SubclassOf.h"
#include "SBZModularPartSlotBase.generated.h"

class USBZModularPartApplier;
class USBZModularPartDataAsset;

UCLASS(Blueprintable, Const)
class STARBREEZE_API USBZModularPartSlotBase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZModularPartDataAsset> ModularPartClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZModularPartApplier> ApplierClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ApplierPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotWhenEquippedTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZModularPartApplier* ApplierInstance;
    
public:
    USBZModularPartSlotBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDisplayName(FText& OutDisplayName, bool& OutHasText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZModularPartApplier* GetApplierInstance() const;
    
};

