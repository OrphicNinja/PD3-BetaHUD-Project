#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZRappellingRopeSettings.h"
#include "SBZRappellingRopeData.generated.h"

UCLASS(Blueprintable)
class USBZRappellingRopeData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZRappellingRopeSettings EnterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZRappellingRopeSettings ExitSettings;
    
    USBZRappellingRopeData();
};

