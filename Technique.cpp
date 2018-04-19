#include "Technique.h"

// add sets to constructor
Technique::Technique(const Point& initialPos, sf::RenderWindow* mainWindow):position(initialPos), window(mainWindow){
    // there will be code here
}

void Technique::getDamage(int value){
    health -= value;
}

bool Technique::isDead() const{
    return health <= 0;
}

const Point& Technique::getPosition() const{
    return position;
}

const Point& Technique::getCurrentVelocity() const{
    return velocity;
}

TankFlyWeight::TankFlyWeight(){}
void TankFlyWeight::updateSprite(sf::Sprite &ground, sf::Sprite &up, const Point &position, const Point &velocity) {}

CarFlyWeight::CarFlyWeight() {}
void CarFlyWeight::updateSprite(sf::Sprite &sprite, const Point &position, const Point &velocity) {}

Tank::Tank(const Point& initialPos, sf::RenderWindow* mainWindow, bool isEnemy, TankFlyWeight* tank):Technique(initialPos, mainWindow),isEnemy(isEnemy), tank(tank){
    health = 10;
    damage = 1;
    speed = 10;
}

Tank::~Tank() {}

void Tank::tryToShot(){
    // there will be code here
}

void Tank::updateSprite(){
    tank->updateSprite(spriteGround, spriteUp, position, velocity);
}

void Tank::updateAction(){
    
}

Car::Car(const Point& initialPos, sf::RenderWindow* mainWindow, CarFlyWeight* car):Technique(initialPos, mainWindow), car(car){
    health = 3;
    speed = 30;
}

Car::~Car() {}

void Car::tryToShot(){
    // car can't shot
}

void Car::updateSprite(){
    car->updateSprite(sprite, position, velocity);
}

void Car::updateAction(){
    
}

