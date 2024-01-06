#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SBZActorContainerLibrary.generated.h"

class AActor;
class USBZActorContainer;

UCLASS(Blueprintable)
class USBZActorContainerLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZActorContainerLibrary();
    UFUNCTION(BlueprintCallable)
    static AActor* FindNearestActorFromContainer(const USBZActorContainer* Container, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> FindNearbyActorsFromContainer(USBZActorContainer* Container, const FVector& Position, float Distance);
    
};

