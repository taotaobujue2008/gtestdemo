#include "testf.h"
#include "sample.h"
#include <stdio.h>  


using namespace std;

void func(bool& flag)
{
    while(flag)
    {
        sleep(1);
        puts("func()"); 
    }
}


funTestF::funTestF() :
    runflag(true)
{
    T1=thread(func,ref(runflag));
    usleep(1000);//太快结束，会导致T1线程来不及运行
    puts("funTestF"); 
}

funTestF::~funTestF()
{
    runflag=false;
    T1.join();
    puts("~funTestF"); 
}




void funTestF::SetUp()
{ 
    puts("SetUp()"); 
}

void funTestF::TearDown()
{ 
    puts("TearDown()"); 
}

TEST_F(funTestF, ByDefaultBazTrueIsTrue) {
    puts("doing");
    EXPECT_LT(-2, fun(1, 2));   
    EXPECT_EQ(-1, fun(1, 2));    
    ASSERT_LT(-2, fun(1, 2));   
    ASSERT_EQ(-1, fun(1, 2));    
}

