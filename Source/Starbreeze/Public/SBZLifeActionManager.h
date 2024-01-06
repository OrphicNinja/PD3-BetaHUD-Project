#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ESBZLifeActionStopReason.h"
#include "SBZLifeActionRequest.h"
#include "SBZLifeActionManager.generated.h"

class ASBZCharacter;
class UAnimMontage;
class UObject;
class USBZLifeActionComponent;
class USBZLifeActionInstance;
class USBZLifeActionManager;
class USBZLifeActionSlot;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZLifeActionManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZLifeActionComponent*> LifeActionComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASBZCharacter*, USBZLifeActionComponent*> LifeActionCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimMontage>> LoadingMontages;
    
public:
    USBZLifeActionManager();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopActionForCharacter(ASBZCharacter* Character, USBZLifeActionSlot* Slot, ESBZLifeActionStopReason StopReason);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetSlotReadyForCharacter(ASBZCharacter* Character);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    USBZLifeActionSlot* ReserveAction(ASBZCharacter* Character, const FSBZLifeActionRequest& Request);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSlotReserved(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotExited(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotEntered(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsCharacterPlayingAction(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsCharacterPendingAction(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    USBZLifeActionComponent* GetLifeActionComponentForCharacter(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    USBZLifeActionSlot* GetClosestLifeActionMatchingTagAny(const FVector Location, const FGameplayTag& LifeActionSlotTag) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    ASBZCharacter* GetCharacterForActionSlot(const USBZLifeActionComponent* LifeActionComponent, const FGameplayTag& LifeActionSlotTag, const USBZLifeActionInstance* LifeActionInstance) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FTransform GetActionSlotTransformForCharacter(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    USBZLifeActionSlot* GetActionSlotForCharacter(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZLifeActionManager* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool EnterActionForCharacter(ASBZCharacter* Character);
    
};

