#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "ESBZVoicePriority.h"
#include "SBZBTTask_PlayVoiceComment.generated.h"

class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class USBZBTTask_PlayVoiceComment : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* VoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoicePriority VoicePriority;
    
public:
    USBZBTTask_PlayVoiceComment();
};

