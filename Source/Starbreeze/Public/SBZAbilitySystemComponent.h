#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilitySystemComponent -FallbackName=AbilitySystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectSpec -FallbackName=GameplayEffectSpec
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=PredictionKey -FallbackName=PredictionKey
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "SBZActorMultiHitResult.h"
#include "SBZExplosionResult.h"
#include "SBZFallDamageTargetData.h"
#include "SBZMeleeTargetData.h"
#include "SBZProjectileTargetData.h"
#include "SBZQueuedAbilityData.h"
#include "SBZRevertDamageAttributeSetData.h"
#include "SBZSkillTriggeredHurtTargetData.h"
#include "SBZVolumeDamageData.h"
#include "Templates/SubclassOf.h"
#include "SBZAbilitySystemComponent.generated.h"

class ACharacter;
class ASBZCharacter;
class UGameplayEffect;
class UObject;
class USBZDamageType;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAbilitySystemComponent : public UAbilitySystemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InputToggledContainer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZQueuedAbilityData> QueuedAbilityArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> LandingGameplayEffectClass;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_AppliedVolumeDamageNetIDArray, meta=(AllowPrivateAccess=true))
    TArray<uint32> AppliedVolumeDamageNetIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> AppliedVolumeDamageArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZVolumeDamageData> CurrentVolumeDamageDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<USBZDamageType>, float> LastVolumeDamageTypeUpdateTimeMap;
    
public:
    USBZAbilitySystemComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ReplicateExplosion(UObject* ExplosiveObject, const FSBZExplosionResult& Result, FPredictionKey PredictionKey);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_MaskOn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AppliedVolumeDamageNetIDArray();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ShoveHumanShield(const FSBZActorMultiHitResult& ActorMultiHitResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Melee(const FSBZMeleeTargetData& TargetData);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_MaskOn();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Landed(const FSBZFallDamageTargetData& TargetData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_FireProjectileSentry(const FSBZProjectileTargetData& TargetData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_FireProjectile(const FSBZProjectileTargetData& TargetData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_FireGrenadeProjectile();
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ExitVolumeDamage(uint32 NetID);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_EnterVolumeDamage(uint32 NetID);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_DebugApplyGameplayEffectSpecToSelf(FGameplayEffectSpec EffectSpec, float Duration, const FString& NameMagnitudeString);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ApplyGameplayEffectSpecToSelf(const FGameplayEffectSpec& EffectSpec);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AppliedSkillHurtReaction(const FSBZSkillTriggeredHurtTargetData& SkillTriggeredHurtTargetData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RevertDamageAttributeSetArray(const TArray<FSBZRevertDamageAttributeSetData>& AttributeSetDataArray);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RevertDamageAttributeSet(const FSBZRevertDamageAttributeSetData& AttributeSetData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PredictedRagdollDenied(ASBZCharacter* InCharacter, int32 HurtReactionIndex);
    
};

