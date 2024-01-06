#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=ReplicationGraphNode -FallbackName=ReplicationGraphNode
#include "SBZReplicationGraphNode_InitialFrameReplication.generated.h"

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API USBZReplicationGraphNode_InitialFrameReplication : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    USBZReplicationGraphNode_InitialFrameReplication();
};

