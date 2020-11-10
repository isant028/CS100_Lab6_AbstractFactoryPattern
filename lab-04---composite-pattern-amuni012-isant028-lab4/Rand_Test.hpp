#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "Rand.hpp"

TEST(RandTest, RandEvalPos) {
    Rand* test = new Rand(67);
   EXPECT_NEAR(test->evaluate(),0, 100);
       };

/*TEST(RandTest, RandEvalPos) {
    Rand* test = new Rand(45);
   EXPECT_NEAR(test->evaluate(),0, 100);
       };
TEST(RandTest, RandEvalPos) {
    Rand* test = new Rand(13);
   EXPECT_NEAR(test->evaluate(),0, 100);
       };*/
   
     #endif //__RAND_TEST_HPP__
