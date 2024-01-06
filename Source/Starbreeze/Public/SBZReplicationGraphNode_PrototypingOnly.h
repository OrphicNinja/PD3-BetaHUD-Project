#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=ReplicationGraphNode -FallbackName=ReplicationGraphNode
#include "SBZReplicationGraphNode_PrototypingOnly.generated.h"

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API USBZReplicationGraphNode_PrototypingOnly : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    USBZReplicationGraphNode_PrototypingOnly();
};

