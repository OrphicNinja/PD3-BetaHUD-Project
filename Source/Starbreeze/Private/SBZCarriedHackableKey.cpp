#include "SBZCarriedHackableKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

void ASBZCarriedHackableKey::OnInteractionEnabledStateChanged(const USBZBaseInteractableComponent* InteractableComponent, bool bInNewState) {
}

void ASBZCarriedHackableKey::Multicast_OnHackComplete_Implementation() {
}





ASBZCarriedHackableKey::ASBZCarriedHackableKey() {
    this->ZoneEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->HackDuration = 30.00f;
    this->DistanceCheckFrequency = 1.00f;
    this->MaxAllowedDistance = 100.00f;
    this->MaxChecksOutsideOfAllowedDistance = 2;
    this->CurrentHackingCharacter = NULL;
    this->CheckOutsideCircleCount = 0;
    this->ChecksMade = 0;
}

