#include "SBZAITaserMine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

void ASBZAITaserMine::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

void ASBZAITaserMine::Multicast_OnWalkedOnTarget_Implementation(AActor* OtherActor) {
}

void ASBZAITaserMine::Multicast_OnWalkedOn_Implementation() {
}

void ASBZAITaserMine::DamageRejected() {
}

ASBZAITaserMine::ASBZAITaserMine() {
    this->DetectionRange = 100.00f;
    this->StunDuration = 3.00f;
    this->WalkedOnEffect = NULL;
    this->DestroyedEffect = NULL;
    this->DestroyedMesh = NULL;
    this->TasedEffect = NULL;
    this->OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));
    this->PlaceSound = NULL;
    this->WalkedOnEvent = NULL;
    this->DestroyedEvent = NULL;
    this->AIExplosionRange = 250.00f;
    this->PlayerExplosionRange = 200.00f;
    this->Spawned = NULL;
}
