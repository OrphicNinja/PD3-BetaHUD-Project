#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SBZDeveloperSettings.h"
#include "SBTutorialCharacterSetting.generated.h"

UCLASS(Blueprintable)
class USBTutorialCharacterSetting : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CharacterGuid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterSku;
    
    USBTutorialCharacterSetting();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTutorialPlayerSku();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetTutorialPlayerGuid();
    
};

