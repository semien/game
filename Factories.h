#include"Technique.h"
#include"Towers.h"

class TechniqueFactory{
public:
    virtual Technique* createTechnique(const Point& initialPosition, sf::RenderWindow* mainWindow, bool isEnemy) = 0;
};

class TowerFactory{
public:
    virtual Tower* createTower(const Point& initialPosition, sf::RenderWindow* mainWindow) = 0;
};

class TankFactory : public TechniqueFactory {
public:
    Technique* createTechnique(const Point& initialPosition, sf::RenderWindow* mainWindow, bool isEnemy);
};

class CarFactory : public TechniqueFactory{
    Technique* createTechnique(const Point& initialPosition, sf::RenderWindow* mainWindow, bool isEnemy);
};

class SimpleTowerFactory : TowerFactory {
public:
    Tower* createTower(const Point& initialPosition, sf::RenderWindow* mainWindow);
};

class ElectricTowerFactory : TowerFactory{
    Tower* createTower(const Point& initialPosition, sf::RenderWindow* mainWindow);
};
