#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SBZBagRespawnPoint.generated.h"

UCLASS(Blueprintable)
class ASBZBagRespawnPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartEnabled;
    
public:
    ASBZBagRespawnPoint();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnableBagRespawnPoint();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisableBagRespawnPoint();
    
};

