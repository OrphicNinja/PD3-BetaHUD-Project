#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "SBZBTTask_PlayMontage.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_PlayMontage : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MontageName;
    
public:
    USBZBTTask_PlayMontage();
};

