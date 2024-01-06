#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SBZOnTelegraphAttackComponent.generated.h"

class ASBZAICharacter;
class ASBZEquippable;
class ASBZWeapon;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZOnTelegraphAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZWeapon* OwnerWeapon;
    
public:
    USBZOnTelegraphAttackComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUnequip(const ASBZEquippable* Equippable);
    
    UFUNCTION(BlueprintCallable)
    void OnTelegraphAttackChanged(ASBZAICharacter* Character, bool bActivated);
    
};

