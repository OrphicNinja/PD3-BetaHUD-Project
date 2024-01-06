#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttributeData -FallbackName=GameplayAttributeData
#include "SBZCharacterAttributeSet.h"
#include "SBZAICharacterAttributeSet.generated.h"

UCLASS(Blueprintable)
class USBZAICharacterAttributeSet : public USBZCharacterAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AccuracyPenalty;
    
    USBZAICharacterAttributeSet();
};

