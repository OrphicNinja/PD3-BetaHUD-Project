#include "SBZCuttableActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
#include "SBZCuttableComponent.h"
#include "SBZCuttableSplineComponent.h"
#include "SBZInteractableComponent.h"

void ASBZCuttableActor::PropDamageReached() {
}

void ASBZCuttableActor::OnServerCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}


void ASBZCuttableActor::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZCuttableActor::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


ASBZCuttableActor::ASBZCuttableActor() {
    this->CuttableVFXComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->WholeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WholeMesh"));
    this->CutMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CutMesh"));
    this->CutOutlineMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CircleOutlineMesh"));
    this->MeltingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeltingMesh"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->CuttableComponent = CreateDefaultSubobject<USBZCuttableComponent>(TEXT("SBZCuttableComponent"));
    this->CuttableSplineComponent = CreateDefaultSubobject<USBZCuttableSplineComponent>(TEXT("SBZCuttableSplineComponent"));
    this->MaterialInterface = NULL;
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->bIsHinged = false;
}

