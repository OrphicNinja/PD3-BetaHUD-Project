#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "SBZEquippablePartDataAsset.h"
#include "SBZModularMeshContainer.h"
#include "SBZModularMeshData.h"
#include "SBZWeaponPartDataAsset.generated.h"

class USBZModularPartSlotBase;

UCLASS(Blueprintable, MinimalAPI)
class USBZWeaponPartDataAsset : public USBZEquippablePartDataAsset, public ISBZModularMeshContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AddTagToWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZModularMeshData> ModularMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZModularPartSlotBase*> UseDefaultPartsFromSlotsAndBlock;
    
    USBZWeaponPartDataAsset();
    
    // Fix for true pure virtual functions not being implemented
};

