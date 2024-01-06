#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EPD3HeistState.h"
#include "SBZNegotiationManager.generated.h"

class APawn;
class USBZNegotiationSettings;

UCLASS(Blueprintable, Within=PD3HeistGameMode)
class USBZNegotiationManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EndNegotiationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNegotiationSettings* Settings;
    
public:
    USBZNegotiationManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnPawnKilledDuringNegotiation(APawn* DeadPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
};

