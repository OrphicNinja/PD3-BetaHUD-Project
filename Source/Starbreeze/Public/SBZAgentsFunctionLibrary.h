#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SBZAgentsFunctionLibrary.generated.h"

class ASBZCharacter;

UCLASS(Blueprintable)
class USBZAgentsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZAgentsFunctionLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SetCrouched(ASBZCharacter* SBZCharacter, bool bCrouched);
    
};

