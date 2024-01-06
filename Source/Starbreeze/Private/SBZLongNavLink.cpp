#include "SBZLongNavLink.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea_Default -FallbackName=NavArea_Default
#include "Templates/SubclassOf.h"

void ASBZLongNavLink::SetPlatformNavArea(TSubclassOf<UNavArea> AreaClass) {
}

void ASBZLongNavLink::SetNavArea(TSubclassOf<UNavArea> AreaClass) {
}

void ASBZLongNavLink::SetLinkEnabled(bool bInLinkEnabled) {
}

void ASBZLongNavLink::OnSmartLinkReached(AActor* MovingActor, const FVector& DestinationPoint) {
}

ASBZLongNavLink::ASBZLongNavLink() {
    this->NavArea = UNavArea_Default::StaticClass();
    this->PlatformNavArea = UNavArea_Default::StaticClass();
    this->Direction = ENavLinkDirection::BothWays;
    this->StartNavLink = NULL;
    this->EndNavLink = NULL;
}

