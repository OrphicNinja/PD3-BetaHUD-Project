#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SBZChatMessage.h"
#include "SBZChatReplicatedProxy.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZChatReplicatedProxy : public AActor {
    GENERATED_BODY()
public:
    ASBZChatReplicatedProxy();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendChatMessage(const FSBZChatMessage& Message);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastReceiveChatMessage(const FSBZChatMessage& Message);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientSendChatMessage(const FSBZChatMessage& Message);
    
};

