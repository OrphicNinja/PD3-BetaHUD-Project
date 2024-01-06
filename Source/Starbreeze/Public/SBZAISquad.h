#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZAISquad.generated.h"

class APawn;
class UNavigationQueryFilter;
class USBZAISquadOrder;

UCLASS(Blueprintable)
class USBZAISquad : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<APawn>> Members;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAISquadOrder* CurrentOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* MostNavRestrictedMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNavigationQueryFilter* MostRestrictedNQF;
    
public:
    USBZAISquad();
    UFUNCTION(BlueprintCallable)
    void OnMemberKilled(APawn* KilledMember);
    
};

