#pragma once
#include "CoreMinimal.h"
#include "SBZOnLanguageChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnLanguageChangedDelegate, const FString&, InLanguage);

