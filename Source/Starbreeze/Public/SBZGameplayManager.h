#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZGameplayManager.generated.h"

class USBZGameplayManager;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZGameplayManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> GameplaySystems;
    
public:
    USBZGameplayManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnRestartLevelStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayableLevelInitialized(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void OnOutroSequenceStarted(const int32 OutroVariation);
    
    UFUNCTION(BlueprintCallable)
    void OnIntroSequenceStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnBlackScreenStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnActionPhaseStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnActionPhaseExited();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZGameplayManager* Get(const UObject* WorldContextObject);
    
};

