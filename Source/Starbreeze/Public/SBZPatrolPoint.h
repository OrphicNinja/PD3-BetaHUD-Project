#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SBZPatrolPoint.generated.h"

class ASBZPatrolPoint;

UCLASS(Blueprintable)
class ASBZPatrolPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZPatrolPoint*> NextPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange WaitTimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePointRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTesting;
    
public:
    ASBZPatrolPoint();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTestingPoint() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Disconnect(ASBZPatrolPoint* Next);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Connect(ASBZPatrolPoint* Next);
    
};
