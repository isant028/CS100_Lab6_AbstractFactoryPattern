#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"

TEST(SubTest, SubEvaluateNum) {
    Base* left = new Op(5);
    Base* right = new Op(3);
    Sub* test = new Sub(left, right);
    EXPECT_EQ(test->evaluate(), 2);
    EXPECT_EQ(test->stringify(), "5.000000 - 3.000000");
}
TEST(SubTest, SubEvaluateSameNum) {
    Base* left = new Op(6);
    Base* right = new Op(6);
    Sub* test = new Sub(left, right);
    EXPECT_EQ(test->evaluate(), 0);
    EXPECT_EQ(test->stringify(), "6.000000 - 6.000000");
}
#endif
