#pragma once
#include<gtest/gtest.h>
#include"Technique.h"

class TankTest: public ::testing::Test {
protected:
    void SetUp() {
        tank1 = new Tank(Point(0,0),nullptr,false);
        tank2 = new Tank(Point(1,2),nullptr,false);
    }
    void TearDown() {
        delete tank1;
        delete tank2;
    }
    Tank* tank1;
    Tank* tank2;
};

TEST_F(TankTest, IsAliveInitially){
    EXPECT_EQ(false, tank1->isDead());
}

TEST_F(TankTest, GetDamageAndIsDeadMethods){
    tank1->getDamage(10);
    EXPECT_EQ(true, tank1->isDead());
    tank2->getDamage(5);
    EXPECT_EQ(false, tank2->isDead());
}

TEST_F(TankTest, InitialPosition){
    Point pos = tank1->getPosition();
    EXPECT_EQ(0, pos.x);
    EXPECT_EQ(0, pos.y);
    Point pos2 = tank2->getPosition();
    EXPECT_EQ(1, pos2.x);
    EXPECT_EQ(2, pos2.y);
}

class CarTest: public ::testing::Test {
protected:
    void SetUp() {
        car1 = new Car(Point(0,0),nullptr);
        car2 = new Car(Point(1,2),nullptr);
    }
    void TearDown() {
        delete car1;
        delete car2;
    }
    Car* car1;
    Car* car2;
};

TEST_F(CarTest, IsAliveInitially){
    EXPECT_EQ(false, car1->isDead());
}

TEST_F(CarTest, GetDamageAndIsDeadMethods){
    car1->getDamage(3);
    EXPECT_EQ(true, car1->isDead());
    car2->getDamage(2);
    EXPECT_EQ(false, car2->isDead());
}

TEST_F(CarTest, InitialPosition){
    Point pos = car1->getPosition();
    EXPECT_EQ(0, pos.x);
    EXPECT_EQ(0, pos.y);
    Point pos2 = car2->getPosition();
    EXPECT_EQ(1, pos2.x);
    EXPECT_EQ(2, pos2.y);
}





