#include "Technique.h"

Technique::Technique(const Point& initialPos, sf::RenderWindow* mainWindow):position(initialPos), window(mainWindow){
    // there will be code here
}

void Technique::getDamage(int value){
    health -= value;
}

//void Technique::setNewSpeed(const Point &newSpeed){
//    speed = newSpeed;
//}

bool Technique::isDead() const{
    return health <= 0;
}

const Point& Technique::getPosition() const{
    return position;
}

const Point& Technique::getCurrentVelocity() const{
    return velocity;
}

const sf::Sprite& Technique::getSprite() const{
    return sprite;
}

Tank::Tank(const Point& initialPos, sf::RenderWindow* mainWindow, bool isEnemy):Technique(initialPos, mainWindow),isEnemy(isEnemy){
    health = 10;
    damage = 1;
    speed = 10;
}

Tank::~Tank() {}

void Tank::update(){
    // there will be code here
}

void Tank::tryToShot(){
    // there will be code here
}

Car::Car(const Point& initialPos, sf::RenderWindow* mainWindow):Technique(initialPos, mainWindow){
    health = 3;
    speed = 30;
}

Car::~Car() {}

void Car::tryToShot(){
    // car can't shot
}

void Car::update(){
    // there will be code here
}

