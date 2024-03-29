#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SBZActorOnInteractionDelegate.h"
#include "SBZInteractionActor.generated.h"

class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;

UCLASS(Blueprintable)
class ASBZInteractionActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* Interactable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZActorOnInteraction OnAckCompleteInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZActorOnInteraction OnServerCompleteInteraction;
    
    ASBZInteractionActor();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleServerComplete(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void HandleAckComplete(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
};

