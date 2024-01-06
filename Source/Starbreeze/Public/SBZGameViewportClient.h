#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameViewportClient -FallbackName=GameViewportClient
#include "SBZGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class USBZGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    USBZGameViewportClient();
};

