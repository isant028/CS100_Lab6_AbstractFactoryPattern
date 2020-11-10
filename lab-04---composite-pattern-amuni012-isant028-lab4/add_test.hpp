#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddTest, addEvaluateNum) {
    Base* left = new Op(5);
    Base* right = new Op(3);
    Add* test = new Add(left, right);
    EXPECT_EQ(test->evaluate(), 8);
    EXPECT_EQ(test->stringify(), "5.000000 + 3.000000");
}

#endif

