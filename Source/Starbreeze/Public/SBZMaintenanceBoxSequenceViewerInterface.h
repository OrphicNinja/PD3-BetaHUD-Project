#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SBZMaintenanceBoxSequenceViewerInterface.generated.h"

UINTERFACE(Blueprintable)
class USBZMaintenanceBoxSequenceViewerInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZMaintenanceBoxSequenceViewerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSequenceHint(const int32 SequenceIndex, const TArray<int32>& CorrectSequence);
    
};

