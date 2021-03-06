#pragma once
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <set>
#include "Towers.h"
#include "Point.h"

class Technique{
public:
    Technique(const Point& initialPos);
    void getDamage(int value);
    bool isDead() const;
    const Point& getPosition() const;
    double getShotDistance() const;
    virtual void updateAction() = 0;
    virtual void updateSprite() = 0;
    virtual void tryToShot() = 0;
//    virtual ~Technique();
protected:
    Technique* target;
    int health;
    double shotDistance;
    Point position;
    Point velocity;
    int speed;
};

class TankFlyWeight {
public:
    TankFlyWeight();
    void updateSprite(sf::Sprite& ground, sf::Sprite& up, const Point& position, const Point& velocity);
private:
    sf::Texture textureGround[2][16];
    sf::Texture textureUp[2][16];
};

class Tank : public Technique{
public:
    Tank(const Point& initialPos, bool isEnemy, TankFlyWeight* tank);
    void tryToShot();
    void updateAction();
    void updateSprite();
    ~Tank();
private:
    TankFlyWeight* tank;
    bool isEnemy;
    int damage;
    int strikeSpeed;
    sf::Sprite spriteGround;
    sf::Sprite spriteUp;
};

class CarFlyWeight {
public:
    CarFlyWeight();
    void updateSprite(sf::Sprite& sprite, const Point& position, const Point& velocity);
private:
    sf::Texture texture[2][16];
};

class Car : public Technique{
public:
    Car(const Point& initialPos, CarFlyWeight* car);
    void tryToShot();
    void updateSprite();
    void updateAction();
    ~Car();
private:
    CarFlyWeight* car;
    sf::Sprite sprite;
};
