#include "testA.h"
#include "sample.h"


using namespace std;




funTestA::funTestA() 
{
    puts("funTestA"); 
}

funTestA::~funTestA()
{
    puts("~funTestA"); 
}


void funB(int n)
{
    for(int i=n;i>0;i--)
    {
        sleep(1);
        puts("funB()"); 
    }
}

void funTestA::SetUp()
{ 
    puts("SetUp() funTestA"); 


    //thread T2([](){puts("thread T2"); });
}

void funTestA::TearDown()
{ 

    puts("TearDown() funTestA"); 
}

TEST_F(funTestA, ByDefaultBazTrueIsTrue) {
    puts("doing");
    EXPECT_LT(-2, fun(1, 2));   
    EXPECT_EQ(-1, fun(1, 2));    
    ASSERT_LT(-2, fun(1, 2));   
    ASSERT_EQ(-1, fun(1, 2));    
}

