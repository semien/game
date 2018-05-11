#pragma once
#include "Game.h"

class Game;
// state pattern

class GameState{
public:
    GameState(Game* game);
    virtual void sendButtons() = 0;
    virtual void addDrawable() = 0;
    virtual void updateGame() = 0;
    virtual ~GameState() = 0;
protected:
    Game* game;
};

class PauseState : public GameState{
public:
    void sendButtons();
    void addDrawable();
    void updateGame();
    ~PauseState();
};

class MenuState : public GameState{
public:
    void sendButtons();
    void addDrawable();
    void updateGame();
    ~MenuState();
};

class ActionState : public GameState{
public:
    void sendButtons();
    void addDrawable();
    void updateGame();
    ~ActionState();
};

class LoadingState : public GameState{
public:
    void sendButtons();
    void addDrawable();
    void updateGame();
    ~LoadingState();
};
