#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "SBZSpawnActorNotifyState.generated.h"

class USBZAnimationSpawnedActorSettings;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZSpawnActorNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAnimationSpawnedActorSettings* SpawnSettings;
    
public:
    USBZSpawnActorNotifyState();
};

