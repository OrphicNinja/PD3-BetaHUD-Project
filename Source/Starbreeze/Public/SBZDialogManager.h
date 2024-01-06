#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SBZActiveDialogData.h"
#include "SBZGameplaySystemInterface.h"
#include "SBZDialogManager.generated.h"

class AActor;
class ASBZNarrator;
class USBZDialogDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZDialogManager : public UActorComponent, public ISBZGameplaySystemInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZNarrator* Narrator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<USBZDialogDataAsset*, FSBZActiveDialogData> ActiveDialogs;
    
public:
    USBZDialogManager();
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_PlayDialog(const USBZDialogDataAsset* DialogDataAsset, const TArray<AActor*>& Performers, AActor* DialogInstigator);
    
    
    // Fix for true pure virtual functions not being implemented
};

