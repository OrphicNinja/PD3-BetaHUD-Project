#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZSharedPartList.generated.h"

class USBZEquippablePartDataAsset;

UCLASS(Blueprintable)
class USBZSharedPartList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZEquippablePartDataAsset*> SharedModParts;
    
    USBZSharedPartList();
};

