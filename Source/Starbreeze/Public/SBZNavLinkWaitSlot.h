#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SBZNavLinkWaitSlot.generated.h"

class ASBZAIBaseCharacter;

USTRUCT(BlueprintType)
struct FSBZNavLinkWaitSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZAIBaseCharacter> Occupant;
    
    STARBREEZE_API FSBZNavLinkWaitSlot();
};

