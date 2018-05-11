#include "GameState.h"

GameState::GameState(Game* game):game(game) {}
GameState::~GameState() {}
// there will be code
void PauseState::sendButtons() {}
void PauseState::addDrawable() {}
void PauseState::updateGame() {}
PauseState::~PauseState() {}

void MenuState::sendButtons() {}
void MenuState::addDrawable() {}
void MenuState::updateGame() {}
MenuState::~MenuState() {}

void ActionState::sendButtons() {}
void ActionState::addDrawable() {}
void ActionState::updateGame() {}
ActionState::~ActionState() {}

void LoadingState::sendButtons() {}
void LoadingState::addDrawable() {}
void LoadingState::updateGame() {}
LoadingState::~LoadingState() {}
