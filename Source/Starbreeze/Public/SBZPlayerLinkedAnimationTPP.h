#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "SBZCharacterLinkedAnimation.h"
#include "SBZDefeatStateAnimationHandler.h"
#include "SBZPlayerLinkedAnimationTPP.generated.h"

class ASBZPlayerCharacter;

UCLASS(Blueprintable, NonTransient)
class USBZPlayerLinkedAnimationTPP : public USBZCharacterLinkedAnimation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator UpperBodyAimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZDefeatStateAnimationHandler DefeatStateAnimationHandler;
    
public:
    USBZPlayerLinkedAnimationTPP();
};

