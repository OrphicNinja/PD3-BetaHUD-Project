#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZVote.generated.h"

class USBZVotingManager;

UCLASS(Blueprintable, Config=Starbreeze)
class USBZVote : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZVotingManager* VotingManager;
    
public:
    USBZVote();
};

