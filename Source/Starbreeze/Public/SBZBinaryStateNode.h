#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SBZOnBinaryStateChangedDelegate.h"
#include "SBZBinaryStateNode.generated.h"

UCLASS(Blueprintable)
class ASBZBinaryStateNode : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnBinaryStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bState;
    
    ASBZBinaryStateNode();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(bool bInState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetState() const;
    
};
