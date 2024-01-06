#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "SBZSettingsButtonMultipleChoice.h"
#include "SBZSettingsButtonResolutionChoice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButtonResolutionChoice : public USBZSettingsButtonMultipleChoice {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntPoint> OptionResolutions;
    
public:
    USBZSettingsButtonResolutionChoice();
    UFUNCTION(BlueprintCallable)
    void SetOptionResolutions(const TArray<FIntPoint>& InOptionResolutions);
    
};

