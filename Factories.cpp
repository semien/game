#include "Factories.h"

Technique* TankFactory::createTechnique(const Point& initialPosition, sf::RenderWindow* mainWindow, bool isEnemy){
    return new Tank(initialPosition, mainWindow, isEnemy);
}

Tower* SimpleTowerFactory::createTower(const Point& initialPosition, sf::RenderWindow* mainWindow){
    return new SimpleTower(initialPosition, mainWindow);
}
