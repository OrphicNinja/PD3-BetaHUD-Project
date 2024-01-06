#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "SBZWheeledVehicleSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZWheeledVehicleSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    USBZWheeledVehicleSkeletalMeshComponent();
};

