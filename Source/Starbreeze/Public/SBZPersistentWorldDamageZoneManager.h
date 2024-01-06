#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SBZMeshZones.h"
#include "SBZPersistentWorldDamageZoneManager.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class STARBREEZE_API ASBZPersistentWorldDamageZoneManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZMeshZones> MeshZonesMap;
    
public:
    ASBZPersistentWorldDamageZoneManager();
};

