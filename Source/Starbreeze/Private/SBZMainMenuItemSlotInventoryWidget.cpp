#include "SBZMainMenuItemSlotInventoryWidget.h"





void USBZMainMenuItemSlotInventoryWidget::NativeOnItemSlotButtonSelected(USBZMenuButton* SelectedButton) {
}

USBZInventoryBaseData* USBZMainMenuItemSlotInventoryWidget::GetActiveItem() const {
    return NULL;
}

bool USBZMainMenuItemSlotInventoryWidget::DisplayItemSlotScreen(ESBZItemLoadoutSlot InItemSlotType, USBZInventoryBaseData* InActiveItem) {
    return false;
}

USBZMainMenuItemSlotInventoryWidget::USBZMainMenuItemSlotInventoryWidget() {
    this->ItemSlotButtonClass = NULL;
    this->Panel_ItemSlotButtons = NULL;
    this->ItemSlotType = ESBZItemLoadoutSlot::Armour;
    this->SelectedItemButton = NULL;
}

