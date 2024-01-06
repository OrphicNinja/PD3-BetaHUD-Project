#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator_BlackboardBase -FallbackName=BTDecorator_BlackboardBase
#include "SBZBTDecorator_TargetIsInRoomType.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_TargetIsInRoomType : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RoomType;
    
public:
    USBZBTDecorator_TargetIsInRoomType();
};

