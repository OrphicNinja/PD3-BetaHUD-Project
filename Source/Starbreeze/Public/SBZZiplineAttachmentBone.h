#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SBZZiplineAttachmentBone.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZZiplineAttachmentBone : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
public:
    USBZZiplineAttachmentBone();
};

