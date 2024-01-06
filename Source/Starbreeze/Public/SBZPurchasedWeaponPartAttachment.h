#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SBZPurchasedWeaponPartAttachment.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPurchasedWeaponPartAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WeaponPartAttachmentSku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid BaseWeaponEntitlementId;
    
    FSBZPurchasedWeaponPartAttachment();
};

