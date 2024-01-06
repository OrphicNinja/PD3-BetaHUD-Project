#include "SBZAIOrderTargetArea.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

void ASBZAIOrderTargetArea::UpdateCoverPoints() {
}

void ASBZAIOrderTargetArea::SetEnabled(bool bEnable) {
}

bool ASBZAIOrderTargetArea::IsEnabled() const {
    return false;
}

ASBZAIOrderTargetArea::ASBZAIOrderTargetArea() {
    this->bEnabled = true;
    this->bConsiderCoversDirection = true;
    this->ArcAngle = 30.00f;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->Room = NULL;
}

