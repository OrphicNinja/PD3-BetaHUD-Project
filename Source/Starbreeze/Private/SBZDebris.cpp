#include "SBZDebris.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

void ASBZDebris::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASBZDebris::CreateImpactPoint(const FHitResult& Hit) {
}

ASBZDebris::ASBZDebris() {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->MinimumImpactForce = 10.00f;
    this->PhysicalMaterial = NULL;
}

