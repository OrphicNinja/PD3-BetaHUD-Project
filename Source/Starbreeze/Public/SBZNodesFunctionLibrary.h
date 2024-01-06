#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SBZNodesFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZNodesFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZNodesFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static int32 RollRNG(const FRandomStream& RandomStream, int32 LastOutputPinIndex, int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckRNG(int32 Index, int32 RngBitmask);
    
};

