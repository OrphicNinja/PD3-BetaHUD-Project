#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "ESBZReloadState.h"
#include "SBZReloadStateChangeNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZReloadStateChangeNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZReloadState TargetState;
    
public:
    USBZReloadStateChangeNotify();
};

