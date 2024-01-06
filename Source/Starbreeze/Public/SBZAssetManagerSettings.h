#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "SBZDeveloperSettings.h"
#include "SBZAssetManagerSettings.generated.h"

class USBZAssetLookupData;

UCLASS(Blueprintable)
class USBZAssetManagerSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDirectoryPath> PhysicalMaterialPathArray;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZAssetLookupData> SoftAssetLookupData;
    
public:
    USBZAssetManagerSettings();
};

