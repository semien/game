#pragma once
#include<SFML/Audio.hpp>
#include<SFML/Graphics.hpp>
#include"Point.h"

class Tower{
public:
    Tower(const Point& initialPos, sf::RenderWindow* mainWindow);
    const sf::Sprite& getSprite() const;
    virtual void tryToStrike() = 0;
    //virtual ~Tower();
protected:
    sf::RenderWindow* window;
    sf::Sprite sprite;
    sf::Texture texture;
    int damage;
    double rechargeTime;
    Point position;
    double timeFromLastShot;
};

class SimpleTower : public Tower {
public:
    SimpleTower(const Point& initialPos, sf::RenderWindow* mainWindow);
    void tryToStrike();
    ~SimpleTower();
};

class ElectricTower : public Tower {
public:
    ElectricTower(const Point& initialPos, sf::RenderWindow* mainWindow);
    void tryToStrike();
    ~ElectricTower();
};
