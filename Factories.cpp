#include "Factories.h"

Technique* TankFactory::createTechnique(const Point& initialPosition, bool isEnemy){
    return isEnemy ? new Tank(initialPosition, isEnemy, tank1) : new Tank(initialPosition, isEnemy, tank0);
}

Technique* CarFactory::createTechnique(const Point& initialPosition, bool isEnemy){
    return new Car(initialPosition, car);
}

Tower* SimpleTowerFactory::createTower(const Point& initialPosition){
    return new SimpleTower(initialPosition);
}

Tower* ElectricTowerFactory::createTower(const Point& initialPosition){
    return new ElectricTower(initialPosition);
}
