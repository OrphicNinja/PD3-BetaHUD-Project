#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EQSParametrizedQueryExecutionRequest -FallbackName=EQSParametrizedQueryExecutionRequest
#include "Templates/SubclassOf.h"
#include "SBZBTService_UpdateShieldCover.generated.h"

class USBZAIOrder;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class USBZBTService_UpdateShieldCover : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZAIOrder> StayInCoverOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LostLoSAbandonOrderTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* ProtectComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedBottleNeckSize;
    
public:
    USBZBTService_UpdateShieldCover();
};

