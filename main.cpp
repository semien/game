#include <gtest/gtest.h>
#include "Tests.h"
#include "Application.h"




int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    if (RUN_ALL_TESTS()) return 1;
    Application app(false);
    app.run();
    return 0;
}
