#pragma once
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <set>
#include <vector>
#include <string>
#include <queue>
#include "Technique.h"
#include "Towers.h"
#include "Command.h"
#include "Map.h"
#include "GameState.h"

class GameState;

class Game{
public:
    Game();
    void addCommand(Command* comm);
    void executeCommands();
    void sendButtons(); // state pattern
    void addDrawable(); // state pattern
    void updateGame(); // state pattern
    void changeState(GameState* newState); // state pattern
    ~Game();
private:
    GameState* state;
    std::queue<Command*> commands;
    std::set<Technique*> playerTechnique;
    std::set<Technique*> enemyTechnique;
    std::vector<Tower*> towers;
    //Map map;
};
