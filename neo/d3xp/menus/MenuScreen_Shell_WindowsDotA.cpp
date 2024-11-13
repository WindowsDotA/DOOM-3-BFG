#pragma hdrstop
#include "../../idLib/precompiled.h"
#include "../Game_local.h"

void idMenuScreen_Shell_WindowsDotA::Initialize(idMenuHandler* data) {
	idMenuScreen::Initialize(data);

	if (data != NULL) {
		menuGUI = data->GetGUI();
	}

	SetSpritePath("menuSettings");
}

void idMenuScreen_Shell_WindowsDotA::Update() {
	idMenuScreen::Update();
}

void idMenuScreen_Shell_WindowsDotA::ShowScreen(const mainMenuTransition_t transitionType) {
	idMenuScreen::ShowScreen(transitionType);
}

void idMenuScreen_Shell_WindowsDotA::HideScreen(const mainMenuTransition_t transitionType) {
	idMenuScreen::HideScreen(transitionType);
}

bool idMenuScreen_Shell_WindowsDotA::HandleAction(idWidgetAction& action, const idWidgetEvent& event, idMenuWidget* widget, bool forceHandled) {
	return idMenuWidget::HandleAction(action, event, widget, forceHandled);
}