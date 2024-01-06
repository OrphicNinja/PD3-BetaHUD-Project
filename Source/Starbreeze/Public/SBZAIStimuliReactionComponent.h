#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIStimulus -FallbackName=AIStimulus
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SBZStimuliReaction.h"
#include "SBZAIStimuliReactionComponent.generated.h"

class AActor;
class ASBZCharacter;
class USBZAIOrder_Escalate;
class USBZActionNotificationAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZAIStimuliReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZStimuliReaction> Reactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIOrder_Escalate* EscalationOrder;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZActionNotificationAsset* ReasonAssets[13];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZCharacter*> DetectedCharacters;
    
public:
    USBZAIStimuliReactionComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleStimuli(AActor* Actor, FAIStimulus Stimulus);
    
};
