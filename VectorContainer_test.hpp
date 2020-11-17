#ifndef ____VECTORCONTAINER_TEST_HPP__
#define ____VECTORCONTAINER_TEST_HPP__
#include "gtest/gtest.h"
#include "VectorContainer.hpp"
#include "op.hpp"
#include "Mult.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "SelectionSort.cpp"
#include "sort.hpp"
TEST(VectorContainerTestSet, SwapTest) {
 Op* seven = new Op(7);
    VectorContainer* test_container = new VectorContainer();

 test_container->add_element(seven);

    ASSERT_EQ(test_container->size(), 1);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}
TEST(ListContainerTestSet2, SwapTest){
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
TEST(SortThisTestSet, BubbleSortTest){
        Op* seven = new Op(9);
        Op* four = new Op(4);
        Mult* TreeA = new Mult(seven, four);

        Op* three = new Op(36);
        Op* two = new Op(2);
        Add* TreeB = new Add(three, two);

        Op* ten = new Op(10);
        Op* six = new Op(4);
        Sub* TreeC = new Sub(ten, six);

        ListContainer* test_container1 = new ListContainer();
        test_container1->add_element(TreeA);
        test_container1->add_element(TreeB);
        test_container1->add_element(TreeC);

        ASSERT_EQ(test_container1->size(), 3);
        EXPECT_EQ(test_container1->at(0)->evaluate(), 36);
        EXPECT_EQ(test_container1->at(1)->evaluate(), 38);
        EXPECT_EQ(test_container1->at(2)->evaluate(), 6);


        test_container1->set_sort_function(new BubbleSort());
        test_container1->sort();
        ASSERT_EQ(test_container1->size(), 3);
        EXPECT_EQ(test_container1->at(0)->evaluate(), 6);
        EXPECT_EQ(test_container1->at(1)->evaluate(), 36);
        EXPECT_EQ(test_container1->at(2)->evaluate(), 38);

}
TEST(SortThisTestSet, SelectionSortTest){
	Op* seven = new Op(7);
	Op* four = new Op(4);
	Mult* TreeA = new Mult(seven, four);

	Op* three = new Op(3);
	Op* two = new Op(2);
	Add* TreeB = new Add(three, two);

	Op* ten = new Op(10);
	Op* six = new Op(6);
	Sub* TreeC = new Sub(ten, six);

	ListContainer* test_container = new ListContainer();
	test_container->add_element(TreeA);
	test_container->add_element(TreeB);
	test_container->add_element(TreeC);

	ASSERT_EQ(test_container->size(), 3);
	EXPECT_EQ(test_container->at(0)->evaluate(), 28);
	EXPECT_EQ(test_container->at(1)->evaluate(), 5);
	EXPECT_EQ(test_container->at(2)->evaluate(), 4);


	test_container->set_sort_function(new SelectionSort());
	test_container->sort();
	ASSERT_EQ(test_container->size(), 3);
	EXPECT_EQ(test_container->at(0)->evaluate(), 4);
	EXPECT_EQ(test_container->at(1)->evaluate(), 5);
	EXPECT_EQ(test_container->at(2)->evaluate(), 28);	

}
TEST(VectorContainerTestSet, BubbleSortTestNegative) {
	Op* NegNine = new Op(-9);
	Op* one = new Op(1);
	Mult* TreeA = new Mult(NegNine, one);

	Op* five = new Op(5);
	Op* Negtwo = new Op(-2);
	Add* TreeB = new Add(five, Negtwo);

	Op* six = new Op(6);
	Op* NegFour = new Op(-4);
	Sub* TreeC = new Sub(six, NegFour);

	ListContainer* test_container1 = new ListContainer();
	test_container1->add_element(TreeA);
	test_container1->add_element(TreeB);
	test_container1->add_element(TreeC);

	ASSERT_EQ(test_container1->size(), 3);
	EXPECT_EQ(test_container1->at(0)->evaluate(), -9);
	EXPECT_EQ(test_container1->at(1)->evaluate(), 3);
	EXPECT_EQ(test_container1->at(2)->evaluate(), 10);


	test_container1->set_sort_function(new BubbleSort());
	test_container1->sort();
	ASSERT_EQ(test_container1->size(), 3);
	EXPECT_EQ(test_container1->at(0)->evaluate(), -9);
	EXPECT_EQ(test_container1->at(1)->evaluate(), 3);
	EXPECT_EQ(test_container1->at(2)->evaluate(), 10);	
}
#endif 
