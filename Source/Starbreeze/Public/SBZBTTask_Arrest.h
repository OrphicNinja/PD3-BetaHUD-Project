#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "ESBZArrestType.h"
#include "SBZBTTask_Arrest.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_Arrest : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArrestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 AllowedStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZArrestType BBTypeToArrest;
    
public:
    USBZBTTask_Arrest();
};

