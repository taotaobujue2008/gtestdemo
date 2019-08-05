#include "gtest/gtest.h"    
#include "sample.h"  
    
 //TEST (gtest macro),fun:function name to test, "case1" test case name  
TEST(fun, case2)    
{    
    EXPECT_LT(-2, fun(1, 2));   
    EXPECT_EQ(-1, fun(1, 2));    
    ASSERT_LT(-2, fun(1, 2));   
    ASSERT_EQ(-1, fun(1, 2));    
}