#include "SBZPlaceableTripMine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

void ASBZPlaceableTripMine::Server_SetUnarmed_Implementation() {
}

void ASBZPlaceableTripMine::Server_SetArmed_Implementation() {
}

void ASBZPlaceableTripMine::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

ASBZPlaceableTripMine::ASBZPlaceableTripMine() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->ExplosionInstigator = NULL;
    this->PlaceableTripMineEffectClass = NULL;
    this->PlaceableTripMineExplodedEvent = NULL;
    this->DetonationEffect = NULL;
    this->AIExplosionRange = 500.00f;
    this->PlayerExplosionRange = 300.00f;
    this->bExplosionAffectsAIOnly = true;
    this->AdditionalPlayerRange = 0.00f;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->LocalplayerFeedback = NULL;
}

