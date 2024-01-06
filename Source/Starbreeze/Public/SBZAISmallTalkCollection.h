#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZAISmallTalkCollection.generated.h"

class USBZDialogDataAsset;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAISmallTalkCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZDialogDataAsset*> DialogAssets;
    
    USBZAISmallTalkCollection();
};

