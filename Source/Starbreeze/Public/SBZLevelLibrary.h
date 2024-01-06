#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Templates/SubclassOf.h"
#include "SBZLevelLibrary.generated.h"

class AActor;
class ULevel;

UCLASS(Blueprintable)
class USBZLevelLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZLevelLibrary();
    UFUNCTION(BlueprintCallable)
    static ULevel* GetLevel(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllActorsOfClassInLevel(ULevel* Level, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);
    
};

