#pragma once
#include<SFML/Graphics.hpp>
#include "Game.h"
#include "Point.h"

class Button{
public:
    Button(Game* game);
    virtual void click();
protected:
    Point upLeft;
    Point downRight;
    sf::Text name;
    sf::Sprite sprite;
    Game* game;
};

class PauseButton : public Button{
public:
    void click();
};

class ResumeButton : public Button{
public:
    void click();
};

class ExitButton : public Button{
public:
    void click();
};
