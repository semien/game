#include "Factories.h"

Technique* TankFactory::createTechnique(const Point& initialPosition, sf::RenderWindow* mainWindow, bool isEnemy){
    return isEnemy ? new Tank(initialPosition, mainWindow, isEnemy, tank1) : new Tank(initialPosition, mainWindow, isEnemy, tank0);
}

Technique* CarFactory::createTechnique(const Point& initialPosition, sf::RenderWindow* mainWindow, bool isEnemy){
    return new Car(initialPosition, mainWindow, car);
}

Tower* SimpleTowerFactory::createTower(const Point& initialPosition, sf::RenderWindow* mainWindow){
    return new SimpleTower(initialPosition, mainWindow);
}

Tower* ElectricTowerFactory::createTower(const Point& initialPosition, sf::RenderWindow* mainWindow){
    return new ElectricTower(initialPosition, mainWindow);
}
