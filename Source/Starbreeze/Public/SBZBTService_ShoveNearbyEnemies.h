#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "SBZBTService_ShoveNearbyEnemies.generated.h"

UCLASS(Blueprintable)
class USBZBTService_ShoveNearbyEnemies : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationRootMovementAdjustment;
    
public:
    USBZBTService_ShoveNearbyEnemies();
};

