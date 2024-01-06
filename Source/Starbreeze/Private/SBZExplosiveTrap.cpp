#include "SBZExplosiveTrap.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

void ASBZExplosiveTrap::Multicast_CriticalDamageNoParams_Implementation() {
}

void ASBZExplosiveTrap::Multicast_CriticalDamage_Implementation(const FVector ImpactLocation, const FVector ImpactNormal) {
}


ASBZExplosiveTrap::ASBZExplosiveTrap() {
    this->NumberOfShotsToExplode = 3;
    this->NumberOfHitsForCriticalDamage = 1;
    this->bUseImpactPointForEffect = false;
    this->CriticalDamageEffect = NULL;
    this->MarkerAsset = NULL;
    this->NumberOfHitShots = 0;
    this->NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->MarkerId = -1;
}

