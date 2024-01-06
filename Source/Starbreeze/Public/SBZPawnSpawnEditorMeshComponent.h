#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "SBZPawnSpawnEditorMeshComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZPawnSpawnEditorMeshComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    USBZPawnSpawnEditorMeshComponent();
};

