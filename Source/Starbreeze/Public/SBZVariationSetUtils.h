#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SBZVariationSetUtils.generated.h"

class AActor;
class USBZVariationSetData;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STARBREEZE_API USBZVariationSetUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZVariationSetUtils();
    UFUNCTION(BlueprintCallable)
    static void ApplyVariationToStatic(UStaticMeshComponent* StatComponent, USBZVariationSetData* VariationSet, int32 VariationIdx);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyVariationToSkeletal(USkeletalMeshComponent* SkelComponent, USBZVariationSetData* VariationSet, int32 VariationIdx);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyVariation(AActor* Actor, USBZVariationSetData* VariationSet, int32 VariationIdx);
    
};

