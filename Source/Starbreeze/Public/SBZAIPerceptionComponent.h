#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionComponent -FallbackName=AIPerceptionComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIStimulus -FallbackName=AIStimulus
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ActorPerceptionUpdateInfo -FallbackName=ActorPerceptionUpdateInfo
#include "ESBZSenseConfig.h"
#include "SBZAIPerceptionComponent.generated.h"

class AActor;
class UAISenseConfig;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIPerceptionComponent : public UAIPerceptionComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> CombatSensesConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> DistractedSensesConfig;
    
public:
    USBZAIPerceptionComponent();
    UFUNCTION(BlueprintCallable)
    void SetSenseConfig(ESBZSenseConfig ConfigID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTransporterBrutalCarrySkillPerceptionInfoUpdated(const FActorPerceptionUpdateInfo& UpdateInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetPerception(AActor* Actor, FAIStimulus Stimulus);
    
};

