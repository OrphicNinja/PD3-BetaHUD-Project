#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "Templates/SubclassOf.h"
#include "SBZVolumeDamageInterface.generated.h"

class AActor;
class UGameplayEffect;
class UObject;
class USBZDamageType;
class USBZVolumeDamageEffect;

UINTERFACE(Blueprintable)
class USBZVolumeDamageInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZVolumeDamageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsVolumeDamageReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<USBZDamageType> GetVolumeDamageType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetVolumeDamageTickSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetVolumeDamagePerSecond() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetVolumeDamageOwner(UObject* ThisObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<USBZVolumeDamageEffect> GetVolumeDamageEffectClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetVolumeDamageArmorPenetration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetVolumeDamageAddedTagContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FName, float> GetTacticianDiscombobulateVolumeDamageEffectValueMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UGameplayEffect> GetTacticianDiscombobulateVolumeDamageEffectClass() const;
    
};

