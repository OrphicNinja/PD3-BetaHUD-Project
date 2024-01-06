#include "SBZPlaceableSensorTool.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

void ASBZPlaceableSensorTool::Multicast_SensorAmmoDepleted_Implementation() {
}

ASBZPlaceableSensorTool::ASBZPlaceableSensorTool() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->AutoMarkTickInterval = 2.00f;
    this->SensorRange = 500.00f;
    this->MaxMarkableAICount = 10;
}

