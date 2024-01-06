#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "SBZEnvQueryTest_RoomType.generated.h"

UCLASS(Blueprintable)
class USBZEnvQueryTest_RoomType : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RoomType;
    
public:
    USBZEnvQueryTest_RoomType();
};

