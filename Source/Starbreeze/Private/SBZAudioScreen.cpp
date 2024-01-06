#include "SBZAudioScreen.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent

void ASBZAudioScreen::OnAudioEventComplete(EAkCallbackType Type, UAkCallbackInfo* CallbackInfo) {
}




ASBZAudioScreen::ASBZAudioScreen() {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->CurrentRoom = NULL;
    this->CurrentReactorState = ESBZEventReactorState::Inactive;
}

