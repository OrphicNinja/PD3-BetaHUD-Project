#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZPlayerDebuggerOptions.h"
#include "SBZDebuggerOptions.generated.h"

UCLASS(Blueprintable, Config=DoNotSubmit)
class STARBREEZE_API USBZDebuggerOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerDebuggerOptions PlayerOptions;
    
    USBZDebuggerOptions();
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerAutomaticallyInvisibleForAI();
    
    UFUNCTION(BlueprintCallable)
    static bool IsInfiniteAmmo();
    
    UFUNCTION(BlueprintCallable)
    static bool IsInaudible();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGod();
    
};

