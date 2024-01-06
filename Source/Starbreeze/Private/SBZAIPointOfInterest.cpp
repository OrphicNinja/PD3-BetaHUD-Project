#include "SBZAIPointOfInterest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "SBZAIAttractorComponent.h"

void ASBZAIPointOfInterest::OnOwnerDestroyed(AActor* DestroyedActor) {
}


ASBZAIPointOfInterest::ASBZAIPointOfInterest() {
    this->bAutoEnable = true;
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
}

