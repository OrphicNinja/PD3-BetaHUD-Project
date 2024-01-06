#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetManager -FallbackName=AssetManager
#include "SBZAssetManager.generated.h"

class USBZAssetLookupData;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAssetLookupData* AssetLookupData;
    
public:
    USBZAssetManager();
};

