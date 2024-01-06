#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SBZAnimationsPerSpecificEquippablesContainer.h"
#include "SBZBaseCharacterAnimationCollection.h"
#include "SBZMontageContainer.h"
#include "SBZPlayerAnimationCollectionFPP.generated.h"

class ASBZEquippable;

UCLASS(Blueprintable)
class USBZPlayerAnimationCollectionFPP : public USBZBaseCharacterAnimationCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ASBZEquippable>, FSBZAnimationsPerSpecificEquippablesContainer> AnimationLeftHandEquippedContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSBZMontageContainer> GamePlayTagBasedMontageContainers;
    
    USBZPlayerAnimationCollectionFPP();
};

