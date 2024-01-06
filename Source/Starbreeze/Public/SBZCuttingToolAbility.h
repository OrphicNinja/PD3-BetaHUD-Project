#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "ESBZDisplayCaseState.h"
#include "ESBZGateState.h"
#include "SBZGameplayAbility.h"
#include "SBZCuttingToolAbility.generated.h"

class AActor;
class ASBZDisplayCase;
class ASBZGate;
class ASBZInteractableGate;
class ASBZPlayerCharacter;
class USBZCuttableComponent;

UCLASS(Blueprintable)
class USBZCuttingToolAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZDisplayCase* DisplayCase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZInteractableGate* InteractableGate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZCuttableComponent* CurrentCuttableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseGenerationInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseRange;
    
public:
    USBZCuttingToolAbility();
private:
    UFUNCTION(BlueprintCallable)
    void OnGateStateChanged(ASBZGate* Gate, ESBZGateState OldState, ESBZGateState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnDisplayCaseStateChanged(ESBZDisplayCaseState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnCuttableActorEndPlay(AActor* OldAttachParentActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

