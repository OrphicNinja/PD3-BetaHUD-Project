#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "SBZCharacterLinkedAnimation.generated.h"

class ASBZCharacter;
class ASBZEquippable;
class USBZCharacterAnimationCollection;

UCLASS(Blueprintable, NonTransient)
class USBZCharacterLinkedAnimation : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASBZEquippable> CurrentEquippableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterAnimationCollection* CurrentAnimationCollection;
    
public:
    USBZCharacterLinkedAnimation();
};

