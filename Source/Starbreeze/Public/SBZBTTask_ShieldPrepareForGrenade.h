#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "SBZBTTask_ShieldPrepareForGrenade.generated.h"

class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class USBZBTTask_ShieldPrepareForGrenade : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* VoiceComments[5];
    
public:
    USBZBTTask_ShieldPrepareForGrenade();
};

