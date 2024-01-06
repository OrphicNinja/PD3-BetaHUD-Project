#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService_BlackboardBase -FallbackName=BTService_BlackboardBase
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EQSParametrizedQueryExecutionRequest -FallbackName=EQSParametrizedQueryExecutionRequest
#include "SBZBTService_TacticalMovePosition.generated.h"

class AActor;
class ASBZAIController;
class ASBZRoomVolume;

UCLASS(Blueprintable)
class USBZBTService_TacticalMovePosition : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPointDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* TargetEnemyRoom;
    
public:
    USBZBTService_TacticalMovePosition();
};

