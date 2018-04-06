#include "Towers.h"

Tower::Tower(const Point& initialPos, sf::RenderWindow* mainWindow):position(initialPos), window(mainWindow){}

SimpleTower::SimpleTower(const Point& initialPos, sf::RenderWindow* mainWindow):Tower(initialPos, mainWindow){
    // there will be code
}

SimpleTower::~SimpleTower() {}

void SimpleTower::tryToStrike(){
    // there will be code
}

ElectricTower::ElectricTower(const Point& initialPos, sf::RenderWindow* mainWindow):Tower(initialPos, mainWindow){
    // there will be code
}

void ElectricTower::tryToStrike(){
    //
}

ElectricTower::~ElectricTower() {}
