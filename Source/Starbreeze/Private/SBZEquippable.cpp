#include "SBZEquippable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Net/UnrealNetwork.h"

void ASBZEquippable::OnRep_EquippableIndex() {
}

void ASBZEquippable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZEquippable, EquippableIndex);
}

ASBZEquippable::ASBZEquippable() {
    this->LocalDamageFeedback = NULL;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->EquippableIndex = -1;
    this->ModOverrideGripAnimData = NULL;
    this->bIsInventory = true;
    this->EquippableAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("EquippableAkComponent"));
    this->EquippingEvent = NULL;
    this->UnequippingEvent = NULL;
    this->EquippingEventRtpc = NULL;
    this->UnequippingEventRtpc = NULL;
    this->bReplicateRootAttachment = false;
}

