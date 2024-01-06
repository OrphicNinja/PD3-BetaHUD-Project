#include "SBZLongNavLinkPlatform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavModifierComponent -FallbackName=NavModifierComponent

ASBZLongNavLinkPlatform::ASBZLongNavLinkPlatform() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->NavModifierComponent = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifierComponent"));
}

