#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZAssetDatabaseManagerInterface.h"
#include "SBZAssetDatabaseManager.generated.h"

class USBZItemDataContainer;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAssetDatabaseManager : public UObject, public ISBZAssetDatabaseManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZItemDataContainer*> AssetItemSkuMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, USBZItemDataContainer*> AssetItemIdMap;
    
public:
    USBZAssetDatabaseManager();
    
    // Fix for true pure virtual functions not being implemented
};

