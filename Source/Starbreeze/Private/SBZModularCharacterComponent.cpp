#include "SBZModularCharacterComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "SBZCustomizableSuitMeshComponent.h"

void USBZModularCharacterComponent::SetSuitMesh(USkeletalMesh* SuitSkeletalMesh) {
}

void USBZModularCharacterComponent::SetGlovesMesh(USkeletalMesh* GlovesSkeletalMesh) {
}

void USBZModularCharacterComponent::SetBodyMesh(USkeletalMesh* BodySkeletalMesh) {
}

USBZCustomizableSuitMeshComponent* USBZModularCharacterComponent::GetSuitMeshComponent() const {
    return NULL;
}

USkeletalMeshComponent* USBZModularCharacterComponent::GetGlovesMeshComponent() const {
    return NULL;
}

USkeletalMeshComponent* USBZModularCharacterComponent::GetBodyMeshComponent() const {
    return NULL;
}

void USBZModularCharacterComponent::AddToOutline(USBZOutlineComponent* OutlineComponent) {
}

USBZModularCharacterComponent::USBZModularCharacterComponent() {
    this->SuitCapsuleShadowingData = NULL;
    this->SuitMeshComponent = CreateDefaultSubobject<USBZCustomizableSuitMeshComponent>(TEXT("SuitSkeletalMesh"));
    this->GlovesMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GlovesSkeletalMesh"));
    this->BodyMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodySkeletalMesh"));
}

