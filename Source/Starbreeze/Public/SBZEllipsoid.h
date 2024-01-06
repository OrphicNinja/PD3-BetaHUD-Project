#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SBZEllipsoid.generated.h"

class USBZEllipsoidComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZEllipsoid : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZEllipsoidComponent* EllipsoidComponent;
    
    ASBZEllipsoid();
};

