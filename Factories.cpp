#include "Factories.h"

Technique* TankFactory::createTechnique(const Point& initialPosition, sf::RenderWindow* mainWindow, bool isEnemy){
    return new Tank(initialPosition, mainWindow, isEnemy);
}

Technique* CarFactory::createTechnique(const Point& initialPosition, sf::RenderWindow* mainWindow, bool isEnemy){
    return new Car(initialPosition, mainWindow);
}

Tower* SimpleTowerFactory::createTower(const Point& initialPosition, sf::RenderWindow* mainWindow){
    return new SimpleTower(initialPosition, mainWindow);
}

Tower* ElectricTowerFactory::createTower(const Point& initialPosition, sf::RenderWindow* mainWindow){
    return new ElectricTower(initialPosition, mainWindow);
}
