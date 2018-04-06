#pragma once
#include<SFML/Audio.hpp>
#include<SFML/Graphics.hpp>
#include"Point.h"

class Technique{
public:
    Technique(const Point& initialPos, sf::RenderWindow* mainWindow);
    void getDamage(int value);
//    void setNewSpeed(const Point& newSpeed);
    bool isDead() const;
    const Point& getPosition() const;
    const Point& getCurrentVelocity() const;
    const sf::Sprite& getSprite() const;
    virtual void update() = 0;
    virtual void tryToShot() = 0;
//    virtual ~Technique();
protected:
    sf::RenderWindow* window;
    sf::Sprite sprite;
    sf::Texture texture;
    int health;
    Point position;
    Point velocity;
    int speed;
};

class Tank : public Technique{
public:
    Tank(const Point& initialPos, sf::RenderWindow* mainWindow, bool isEnemy);
    void update();
    void tryToShot();
    ~Tank();
private:
    bool isEnemy;
    int damage;
    int strikeSpeed;
};

class Car : public Technique{
public:
    Car(const Point& initialPos, sf::RenderWindow* mainWindow);
    void update();
    void tryToShot();
    ~Car();
};
