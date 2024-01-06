#include "SBZMask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ASBZMask::ASBZMask() {
    this->MaskSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mask"));
    this->MaskStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StrapSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->MaskOnMontage = NULL;
    this->bIsMaskOn = false;
    this->bIsRendered1P = false;
}

