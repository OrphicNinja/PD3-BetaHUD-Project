#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZTargetFinder.generated.h"

class USBZTargetFinderPredicate;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USBZTargetFinder : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZTargetFinderPredicate*> Predicates;
    
public:
    USBZTargetFinder();
};

