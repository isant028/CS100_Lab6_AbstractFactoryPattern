#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "Mult.hpp"

TEST(MultTest, MultEvalTwoPos) {
    Base* test1 = new Op(9);
    Base* test2 = new Op(9);
    Mult* finaltest = new Mult(test1,test2);
   // test2 = test2final-> evaluate();
    EXPECT_EQ(finaltest->evaluate(),81);

};

TEST(MultTest, MultEvalZero) {
    Base* test1 = new Op(0);
    Base* test2 = new Op(59);
    Mult* finaltest = new Mult(test1,test2);
   // test2 = test2final-> evaluate();
       EXPECT_EQ(finaltest->evaluate(),0);
   
     };

#endif //__MULT_TEST_HPP__
