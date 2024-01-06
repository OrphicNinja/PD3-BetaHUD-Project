#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MultipleUsersStatRequests.h"
#include "SBZServerStatBatcher.generated.h"

class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZServerStatBatcher : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMultipleUsersStatRequests CachedServerStatRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* WorldContext;
    
public:
    USBZServerStatBatcher();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleMissionEnd(const int32 OutroVariation);
    
};

