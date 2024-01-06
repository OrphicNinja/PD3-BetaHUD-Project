#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZReplayFileRecorder.generated.h"

class USBZGameInstance;

UCLASS(Blueprintable, Transient)
class STARBREEZE_API USBZReplayFileRecorder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameInstance* GameInstance;
    
public:
    USBZReplayFileRecorder();
};

