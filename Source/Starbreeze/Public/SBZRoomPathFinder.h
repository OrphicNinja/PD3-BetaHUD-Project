#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZNode.h"
#include "SBZRoomPathFinder.generated.h"

class ISBZRoomConnectorInterface;
class USBZRoomConnectorInterface;

UCLASS(Blueprintable)
class STARBREEZE_API USBZRoomPathFinder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<ISBZRoomConnectorInterface>> Frontier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FSBZNode> Visited;
    
public:
    USBZRoomPathFinder();
};

