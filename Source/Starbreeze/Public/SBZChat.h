#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AccelByteUe4Sdk -ObjectName=AccelByteModelsChatNotif -FallbackName=AccelByteModelsChatNotif
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "ChatMessageReceivedDelegate.h"
#include "SBZChatMessage.h"
#include "SBZWhisperInfo.h"
#include "SBZChat.generated.h"

class USBZChat;

UCLASS(Blueprintable, NotPlaceable, Transient, Config=Game)
class STARBREEZE_API USBZChat : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZChatMessage> OnlineChatHistory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatMessageReceived OnMessageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> MutedPlayers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZWhisperInfo> WhisperOptions;
    
public:
    USBZChat();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SendSystemChatMessage(UObject* WorldContextObject, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void SendSessionMessage(const FSBZChatMessage& InMessage);
    
    UFUNCTION(BlueprintCallable)
    void SendChatMessage(FSBZChatMessage ChatMessage);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionMessageReceived(const FAccelByteModelsChatNotif& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMuted(FUniqueNetIdRepl UniqueNetId);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSBZWhisperInfo> GetWhisperOptions();
    
    UFUNCTION(BlueprintCallable)
    bool GetNextWhisperOption(const FUniqueNetIdRepl& CurrentWhisper, FUniqueNetIdRepl& OutNextWhisper, FString& OutNextWhisperName, bool& bOutNoWhisperOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZChat* GetChat(UObject* WorldContextObject);
    
};

