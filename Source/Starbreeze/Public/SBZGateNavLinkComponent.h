#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationLink -FallbackName=NavigationLink
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavLinkCustomInterface -FallbackName=NavLinkCustomInterface
#include "SBZAgilityTrajectoryInterface.h"
#include "SBZBlockableNavlinkInterface.h"
#include "Templates/SubclassOf.h"
#include "SBZGateNavLinkComponent.generated.h"

class AController;
class ASBZCharacter;
class UNavArea;
class USBZNavLinkAgilityComponent;

UCLASS(Blueprintable, EditInlineNew, HideDropdown, ClassGroup=Custom, Within=SBZGate, meta=(BlueprintSpawnableComponent))
class USBZGateNavLinkComponent : public UActorComponent, public INavLinkCustomInterface, public ISBZBlockableNavlinkInterface, public ISBZAgilityTrajectoryInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavigationLink NavigationLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsBlocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsUsing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZNavLinkAgilityComponent* AgilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* AllowedBlockingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* AllowedBlockingController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> OriginalAreaClass;
    
public:
    USBZGateNavLinkComponent();
    
    // Fix for true pure virtual functions not being implemented
};

