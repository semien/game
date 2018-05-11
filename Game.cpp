#include<SFML/Audio.hpp>
#include<SFML/Graphics.hpp>
#include<iostream>
#include"Game.h"

Game::Game() {}
Game::~Game() {}

void Game::addCommand(Command *comm){
    commands.push(comm);
}

void Game::executeCommands(){
    while (!commands.empty()){
        Command* comm = commands.front();
        comm->execute();
        commands.pop();
        delete comm;
    }
}

void Game::sendButtons(){
    state->sendButtons();
}

void Game::addDrawable(){
    state->addDrawable();
}

void Game::updateGame(){
    state->updateGame();
}

void Game::changeState(GameState *newState){
    delete state;
    state = newState;
}
