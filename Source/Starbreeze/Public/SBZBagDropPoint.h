#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SBZBagDropPoint.generated.h"

UCLASS(Blueprintable)
class ASBZBagDropPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldActivateOnBeginPlay;
    
public:
    ASBZBagDropPoint();
    UFUNCTION(BlueprintCallable)
    void EnableAsBagDropPoint();
    
    UFUNCTION(BlueprintCallable)
    void DisableAsBagDropPoint();
    
};

