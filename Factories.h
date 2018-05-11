#pragma once
#include "Technique.h"
#include "Towers.h"

class TechniqueFactory{
public:
    virtual Technique* createTechnique(const Point& initialPosition, bool isEnemy) = 0;
};

class TowerFactory{
public:
    virtual Tower* createTower(const Point& initialPosition) = 0;
};

class TankFactory : public TechniqueFactory {
public:
    Technique* createTechnique(const Point& initialPosition,bool isEnemy);
private:
    TankFlyWeight* tank0; // player
    TankFlyWeight* tank1; // enemy
};

class CarFactory : public TechniqueFactory{
public:
    Technique* createTechnique(const Point& initialPosition, bool isEnemy);
private:
    CarFlyWeight* car;
};

class SimpleTowerFactory : TowerFactory {
public:
    Tower* createTower(const Point& initialPosition);
};

class ElectricTowerFactory : TowerFactory{
    Tower* createTower(const Point& initialPosition);
};
