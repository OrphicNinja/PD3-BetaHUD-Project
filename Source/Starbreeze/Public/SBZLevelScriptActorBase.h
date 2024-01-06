#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelScriptActor -FallbackName=LevelScriptActor
#include "SBZLevelScriptActorBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZLevelScriptActorBase : public ALevelScriptActor {
    GENERATED_BODY()
public:
    ASBZLevelScriptActorBase();
    UFUNCTION(BlueprintCallable)
    bool RemoteEventWithInt(FName EventName, int32 Integer);
    
    UFUNCTION(BlueprintCallable)
    bool RemoteEventWithBool(FName EventName, bool bBool);
    
    UFUNCTION(BlueprintCallable)
    bool RemoteEventWithActorsArray(FName EventName, const TArray<AActor*>& Actor);
    
    UFUNCTION(BlueprintCallable)
    bool RemoteEventWithActor(FName EventName, AActor* Actor);
    
};

