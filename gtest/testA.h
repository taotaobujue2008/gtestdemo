#ifndef _TESTA_H_
#define _TESTA_H_

#include "testf.h"
#include "gtest/gtest.h"
#include <thread>


using namespace std;

// The fixture for testing class Foo.
class funTestA : public :: funTestF {
public:

protected:

    // You can do set-up work for each test here.
    funTestA();

    // You can do clean-up work that doesn't throw exceptions here.
    virtual ~funTestA();

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    // Code here will be called immediately after the constructor (right
    // before each test).
    virtual void SetUp();

    // Code here will be called immediately after each test (right
    // before the destructor).
    virtual void TearDown();
};


#endif