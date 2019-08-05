#include "gtest/gtest.h"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    printf("my gtest main!\n");
    int ret = RUN_ALL_TESTS();
    return ret;
}
