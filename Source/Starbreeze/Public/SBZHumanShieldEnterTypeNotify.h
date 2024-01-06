#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "ESBZHumanShieldEnterType.h"
#include "SBZHumanShieldEnterTypeNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZHumanShieldEnterTypeNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZHumanShieldEnterType HumanShieldEnterType;
    
    USBZHumanShieldEnterTypeNotify();
};

