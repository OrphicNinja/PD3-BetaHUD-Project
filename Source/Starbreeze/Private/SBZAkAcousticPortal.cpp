#include "SBZAkAcousticPortal.h"

void ASBZAkAcousticPortal::OnDebugLogging() {
}

void ASBZAkAcousticPortal::OnActivateTick(bool bTick) {
}

ASBZAkAcousticPortal::ASBZAkAcousticPortal() {
    this->FrontSoundEnvironment = NULL;
    this->BackSoundEnvironment = NULL;
    this->ConnectedGate = NULL;
    this->DebugScreenTimer = 10.00f;
    this->StateOpenDelay = 0.00f;
    this->StateCloseDelay = 0.00f;
    this->bAllowStateChange = true;
}

