#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPD3HeistState.h"
#include "SBZSmartNavLink.h"
#include "SBZPedestrianTrafficNavLink.generated.h"

class ASBZAIBaseCharacter;
class ASBZTrafficVolume;
class USBZNavLinkWaitSlotRoot;

UCLASS(Blueprintable)
class ASBZPedestrianTrafficNavLink : public ASBZSmartNavLink {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZNavLinkWaitSlotRoot* WaitSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CrossingEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfCrossingWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LaneCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval CharacterDelayBeforePathing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZTrafficVolume*> LinkedTrafficVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZAIBaseCharacter*> CrossingCharacters;
    
public:
    ASBZPedestrianTrafficNavLink();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTrafficAllowed(bool bAllowed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
};

