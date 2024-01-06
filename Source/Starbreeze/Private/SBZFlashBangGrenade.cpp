#include "SBZFlashBangGrenade.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent

ASBZFlashBangGrenade::ASBZFlashBangGrenade() {
    this->CapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
}

