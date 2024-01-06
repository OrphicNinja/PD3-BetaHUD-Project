#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZGenericPool.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced)
class USBZGenericPool : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Pool;
    
public:
    USBZGenericPool();
};

