#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ESBZFireTokenType.h"
#include "SBZFirePermissionManager.generated.h"

class UObject;

UCLASS(Blueprintable, Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDEPRECATED_SBZFirePermissionManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZFireTokenType, int32> TokenLimits;
    
    UDEPRECATED_SBZFirePermissionManager();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetRemoved(UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetAdded(UObject* Obj);
    
};

