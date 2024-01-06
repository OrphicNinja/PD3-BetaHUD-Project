#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SBZSuitConfig.h"
#include "SBZSuitCustomizationComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZSuitCustomizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZSuitConfig SuitConfig;
    
public:
    USBZSuitCustomizationComponent();
    UFUNCTION(BlueprintCallable)
    void SetSuitConfig(const FSBZSuitConfig& Config);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshComponent(USkeletalMeshComponent* InMeshCompoenent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NativeOnSkeletalMeshLoaded();
    
};

