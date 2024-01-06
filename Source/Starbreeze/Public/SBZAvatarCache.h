#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZAvatarCache.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAvatarCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> AvatarTextureCache;
    
public:
    USBZAvatarCache();
};

