#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "SBZAirNavigationTree.h"
#include "SBZAirNavigation.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ASBZAirNavigation : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAirNavigationTree> NavData;
    
public:
    ASBZAirNavigation();
    UFUNCTION(BlueprintCallable)
    void GenerateNavigationData();
    
};

