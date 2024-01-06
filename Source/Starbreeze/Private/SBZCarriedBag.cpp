#include "SBZCarriedBag.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationBudgetAllocator -ObjectName=SkeletalMeshComponentBudgeted -FallbackName=SkeletalMeshComponentBudgeted
#include "SBZInteractableCarriedBagComponent.h"

void ASBZCarriedBag::OnInteractionComplete(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}




ASBZCarriedBag::ASBZCarriedBag() {
    this->SkeletalMeshComponentBudgeted = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("SkeletalMeshComponentBudgeted"));
    this->OwningCharacter = NULL;
    this->AIBagOutlineAsset = NULL;
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableCarriedBagComponent>(TEXT("SBZInteractableComponent"));
}

