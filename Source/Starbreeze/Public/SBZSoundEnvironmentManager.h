#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SBZSoundEnvironmentManager.generated.h"

class ASBZSoundEnvironment;

UCLASS(Blueprintable)
class USBZSoundEnvironmentManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZSoundEnvironment*> LastActiveSoundEnvironments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZSoundEnvironment*> CurrentlyActiveSoundEnvironments;
    
public:
    USBZSoundEnvironmentManager();
};

