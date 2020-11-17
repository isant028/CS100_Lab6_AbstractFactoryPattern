#ifndef __LISTCONTAINER_TEST_HPP__
#define __LISTCONTAINER_TEST_HPP__

#include "gtest/gtest.h"

#include "listcontainer.cpp"
#include "op.hpp"
TEST(ListContainerTestSet, SwapTest){
	Op* seven = new Op(7);
	Op* nine = new Op(9);
	ListContainer* test_container = new ListContainer();
	test_container->add_element(seven);
	test_container->add_element(nine);

	ASSERT_EQ(test_container->size(), 2);
	EXPECT_EQ(test_container->at(0)-> evaluate(), 7);
	EXPECT_EQ(test_container->at(1)-> evaluate(), 9);
	test_container->swap(0,1);
	EXPECT_EQ(test_container->at(0)-> evaluate(), 9);
	EXPECT_EQ(test_container->at(1)-> evaluate(), 7);

}

#endif //__LISTCONTAINER_TEST_HPP__
