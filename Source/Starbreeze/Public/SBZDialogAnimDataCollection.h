#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZDialogAnimData.h"
#include "SBZDialogAnimDataCollection.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZDialogAnimDataCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZDialogAnimData> DialogAnimDatas;
    
    USBZDialogAnimDataCollection();
};

