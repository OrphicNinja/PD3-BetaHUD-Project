#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZAttractorPredicate.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAttractorPredicate : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInversed;
    
    USBZAttractorPredicate();
};

