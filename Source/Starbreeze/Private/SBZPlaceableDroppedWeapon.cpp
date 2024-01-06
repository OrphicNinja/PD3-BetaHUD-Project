#include "SBZPlaceableDroppedWeapon.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"

void ASBZPlaceableDroppedWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlaceableDroppedWeapon, AmmoLoadedLeft);
    DOREPLIFETIME(ASBZPlaceableDroppedWeapon, AmmoInventoryLeft);
}

ASBZPlaceableDroppedWeapon::ASBZPlaceableDroppedWeapon() {
    this->WeaponPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->AttachedWeapon = NULL;
    this->AmmoLoadedLeft = 0;
    this->AmmoInventoryLeft = 0;
}

