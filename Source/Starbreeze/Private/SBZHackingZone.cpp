#include "SBZHackingZone.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "Net/UnrealNetwork.h"

void ASBZHackingZone::OnRep_ZoneEnabled() {
}

void ASBZHackingZone::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZHackingZone::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZHackingZone::Multicast_SetZoneEnabled_Implementation(bool bInEnabled) {
}




void ASBZHackingZone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZHackingZone, bEnabled);
}

ASBZHackingZone::ASBZHackingZone() {
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->bEnabled = false;
    this->ZoneIndex = -1;
    this->ActiveTime = 0.00f;
}

