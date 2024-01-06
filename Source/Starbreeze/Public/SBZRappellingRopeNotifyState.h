#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "SBZRappellingRopeNotifyState.generated.h"

class USBZRappellingRopeData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZRappellingRopeNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZRappellingRopeData* RappellingRopeData;
    
public:
    USBZRappellingRopeNotifyState();
};

