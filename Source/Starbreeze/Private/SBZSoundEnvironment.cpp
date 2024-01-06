#include "SBZSoundEnvironment.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkLateReverbComponent -FallbackName=AkLateReverbComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkRoomComponent -FallbackName=AkRoomComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BrushComponent -FallbackName=BrushComponent

void ASBZSoundEnvironment::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZSoundEnvironment::OnDebugLoggingSoundEnvironment(ASBZSoundEnvironment* TargetEnvironment) {
}

void ASBZSoundEnvironment::OnDebugLoggingPostEvent(UAkAudioEvent* AudioEvent) {
}

void ASBZSoundEnvironment::OnDebugLoggingPortal(ASBZAkAcousticPortal* TargetPortal) {
}

void ASBZSoundEnvironment::Activate() {
}

ASBZSoundEnvironment::ASBZSoundEnvironment() {
    this->LateReverbComponent = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("AkLateReverbComponent"));
    this->RoomComponent = CreateDefaultSubobject<UAkRoomComponent>(TEXT("UAkRoomComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->SoundEnvironmentManager = NULL;
    this->bDebugEnabled = false;
    this->DebugTimer = 5.00f;
    this->BrushComponentPointer = CreateDefaultSubobject<UBrushComponent>(TEXT("BrushComponent0"));
}

