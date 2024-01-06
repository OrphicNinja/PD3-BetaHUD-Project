#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SBZWaypoint.generated.h"

class USBZMarkerDataAsset;

UCLASS(Blueprintable)
class ASBZWaypoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMarkerOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* MarkerAsset;
    
public:
    ASBZWaypoint();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveMarker();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddMarker();
    
};

