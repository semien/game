#include<gtest/gtest.h>
#include"Game.h"
#include"Tests.h"




int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
//    Game game(false);
//    game.play();
}
