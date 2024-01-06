#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZCoverShootingPoints.h"
#include "SBZCoverPointManager.generated.h"

class AActor;
class ASBZCoverPoint;
class USBZCoverPointManager;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class USBZCoverPointManager : public UObject {
    GENERATED_BODY()
public:
    USBZCoverPointManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZCoverShootingPoints> GetShootingPoints() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ASBZCoverPoint*> GetCoverWithinBounds(const FBoxSphereBounds& Bounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetCoverSafeness(const ASBZCoverPoint* CoverPoint, const TArray<AActor*>& Enemies) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZCoverPointManager* Get(UObject* WorldContextObject);
    
};

