#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "SBZVoiceComponentInterface.h"
#include "SBZNarrator.generated.h"

class USBZCharacterVoiceComponent;

UCLASS(Blueprintable)
class ASBZNarrator : public AInfo, public ISBZVoiceComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCharacterVoiceComponent* VoiceComponent;
    
public:
    ASBZNarrator();
    
    // Fix for true pure virtual functions not being implemented
};

