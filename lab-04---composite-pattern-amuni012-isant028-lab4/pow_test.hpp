#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"

TEST(PowTest, PowEvaluate) {
    Base* left  = new Op(2);
    Base* right = new Op(4);
    Pow* test = new Pow(left, right);
    EXPECT_EQ(test->evaluate(), 16);
    EXPECT_EQ(test->stringify(), "2.000000**4.000000");
}
TEST(PowTest, PowEvaluateNeg){
    Base* left = new Op(-1);
    Base* right = new Op(3);
    Pow* test = new Pow(left, right);
    EXPECT_EQ(test->evaluate(), -1);
    EXPECT_EQ(test->stringify(), "-1.000000**3.000000");
}
#endif
