#pragma once
#include "Point.h"
//#include "Game.h"

class Command{  //questionable
public:
    virtual void execute();
protected:
   // Game* game;
};

//class createTechCommand : public Command{
//public:
//    createTechCommand(const Point& pos);
//    void execute();
//private:
//    Point init;
//};

//class stopCommand : public Command{
//    void execute();
//};

class exitCommand : public Command{
    void execute();
};
