#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "SBZCosmeticProp.h"
#include "SBZZiplineMotor.generated.h"

class ISBZZiplinerInterface;
class USBZZiplinerInterface;
class USBZCableComponent;

UCLASS(Blueprintable)
class ASBZZiplineMotor : public ASBZCosmeticProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AheadOffsetFromZipLiner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalAheadOffsetFromZipLiner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OffsetFromZipLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISBZZiplinerInterface> ZipLiner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCableComponent* CableComponent;
    
    ASBZZiplineMotor();
};

