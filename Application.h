#pragma once
#include "Controller.h"
#include "Game.h"
#include "View.h"

class Application{
public:
    Application(bool isFullScreen);
    int run();
    ~Application();
private:
    sf::RenderWindow* window;
    Controller* controller;
    Game* game;
    View* view;
};
