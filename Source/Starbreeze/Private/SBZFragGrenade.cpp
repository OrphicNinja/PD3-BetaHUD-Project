#include "SBZFragGrenade.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

ASBZFragGrenade::ASBZFragGrenade() {
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionCapsule"));
}

