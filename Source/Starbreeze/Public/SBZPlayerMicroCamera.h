#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
#include "SBZCameraViewInterface.h"
#include "SBZPlayerMicroCamera.generated.h"

class ASBZPlayerCharacter;
class USBZToolSkeletalMeshComponent;

UCLASS(Blueprintable)
class ASBZPlayerMicroCamera : public AActor, public ISBZCameraViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZToolSkeletalMeshComponent* SkeletalMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CameraTargetRotation, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal ReplicatedCameraTargetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CameraCurrentRotation, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal ReplicatedCameraCurrentRotation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval YawLimit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval PitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* InstigatorCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ViewTargetPlayerStateIdArray, meta=(AllowPrivateAccess=true))
    TArray<int32> ViewTargetPlayerStateIdArray;
    
public:
    ASBZPlayerMicroCamera();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ViewTargetPlayerStateIdArray(const TArray<int32>& OldViewTargetPlayerStateIdArray);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CameraTargetRotation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CameraCurrentRotation();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateReplicated();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_EndViewTarget(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_BecomeViewTarget(int32 PlayerId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnViewTargetChanged(bool bIsViewTarget);
    
    
    // Fix for true pure virtual functions not being implemented
};
