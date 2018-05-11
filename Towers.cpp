#include "Towers.h"

Tower::Tower(const Point& initialPos):position(initialPos){}

SimpleTower::SimpleTower(const Point& initialPos):Tower(initialPos){
    // there will be code
}

SimpleTower::~SimpleTower() {}

void SimpleTower::tryToStrike(){
    // there will be code
}

ElectricTower::ElectricTower(const Point& initialPos):Tower(initialPos){
    // there will be code
}

void ElectricTower::tryToStrike(){
    //
}

ElectricTower::~ElectricTower() {}
