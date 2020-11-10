#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__
#include "gtest/gtest.h"
#include "div.hpp"


TEST(DivTest, DivEvaluateZero)
{
	Base* top= new Op(0);
	Base* bot= new Op(1);

	Div* test = new Div(top, bot);
	EXPECT_EQ(test->evaluate(), 0);
	EXPECT_EQ(test->stringify(), "0.000000 / 1.000000");
}
TEST(DivTest, DivEvaluatePosNum)
{
	Base* top= new Op(20);
	Base* bot = new Op(5);

	Div* divFinal = new Div(top, bot);
	EXPECT_EQ(divFinal->evaluate(), 4);
	EXPECT_EQ(divFinal->stringify(), "20.000000 / 5.000000");
}
#endif 
