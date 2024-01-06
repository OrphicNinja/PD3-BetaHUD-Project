#include "SBZWwiseMotionManagerComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent

USBZWwiseMotionManagerComponent::USBZWwiseMotionManagerComponent() {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->RootComponent = NULL;
    this->WwiseMotionBusName = TEXT("Wwise_Motion_AD");
}

