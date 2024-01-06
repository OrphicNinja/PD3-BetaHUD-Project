#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SBZSpawnClosetReactorInterface.generated.h"

UINTERFACE(Blueprintable)
class USBZSpawnClosetReactorInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZSpawnClosetReactorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReactToCloset(bool bActorsInCloset, bool bDoCosmetics);
    
};

