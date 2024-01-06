#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SBZPawnVariationData.h"
#include "Templates/SubclassOf.h"
#include "SBZPawnSpawnRequestData.generated.h"

class APawn;

UCLASS(Blueprintable, Const)
class USBZPawnSpawnRequestData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<APawn>> ClassVariationArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPawnVariationData> PawnVariationDatas;
    
    USBZPawnSpawnRequestData();
};

