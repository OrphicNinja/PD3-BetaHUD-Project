#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SBZEditorUtilityLibrary.generated.h"

class AActor;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZEditorUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZEditorUtilityLibrary();
    UFUNCTION(BlueprintCallable)
    static bool ResetToBlueprintDefault(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSbzLevelScriptActor(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetEditorInstanceID(const UObject* WorldContextObject);
    
};

