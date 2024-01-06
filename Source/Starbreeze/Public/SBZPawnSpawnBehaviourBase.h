#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZPawnSpawnBehaviourBase.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class USBZPawnSpawnBehaviourBase : public UObject {
    GENERATED_BODY()
public:
    USBZPawnSpawnBehaviourBase();
};

