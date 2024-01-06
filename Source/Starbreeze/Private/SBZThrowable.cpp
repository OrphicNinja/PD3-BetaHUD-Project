#include "SBZThrowable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

void ASBZThrowable::Server_SetThrowableState_Implementation(ESBZThrowableState NewThrowableState) {
}


void ASBZThrowable::OnThrownActorHit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASBZThrowable::OnThrownActorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void ASBZThrowable::OnRep_ThrowableState() {
}


void ASBZThrowable::OnProjectileStopped(const FHitResult& InHitResult) {
}

void ASBZThrowable::OnProjectileBounce(const FHitResult& InHitResult, const FVector& ImpactVelocity) {
}

void ASBZThrowable::OnInstigatorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}



void ASBZThrowable::Multicast_SetThrowVelocity_Implementation(const FVector_NetQuantizeNormal& ThrowDirection) {
}

void ASBZThrowable::Multicast_SetThrowState_Implementation(ESBZThrowableState NewThrowState) {
}

void ASBZThrowable::Multicast_DestroyBreakable_Implementation(const FHitResult& InBreakableHitResult) {
}

void ASBZThrowable::CreateImpactPoint(const FHitResult& Hit, float Velocity) {
}

void ASBZThrowable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZThrowable, ThrowableState);
}

ASBZThrowable::ASBZThrowable() {
    this->MarkerAsset = NULL;
    this->MarkerActivationDelay = 0.50f;
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->Data = NULL;
    this->OwnerCharacter = NULL;
    this->ThrowableState = ESBZThrowableState::Spawned;
    this->PlayerState = NULL;
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
    this->bReduceBouncinessPerBounce = false;
    this->BouncinessReductionValue = 0.70f;
    this->MaxTimesToReduceBounciness = 3;
    this->MaxBounces = 10;
    this->bEnablePhysicsOnStopped = false;
    this->OverrideAudioEvent = NULL;
    this->OverrideAudioRTPC = NULL;
    this->AudioImpactForceModifierValue = 1.00f;
}

