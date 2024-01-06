#include "SBZPhoneTool.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

void ASBZPhoneTool::Multicast_ToggleScreenMode_Implementation(ESBZPhoneScreenState NewScreenState) {
}

ASBZPhoneTool::ASBZPhoneTool() {
    this->MiniGameWidget = NULL;
    this->GlowMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

