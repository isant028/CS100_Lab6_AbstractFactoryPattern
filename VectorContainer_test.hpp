#ifndef ____VECTORCONTAINER_TEST_HPP__
#define ____VECTORCONTAINER_TEST_HPP__
#include "gtest/gtest.h"
#include "VectorContainer.hpp"

TEST(VectorContainerTestSet, SwapTest) {
 Op* seven = new Op(7);
    VectorContainer* test_container = new VectorContainer();

 test_container->add_element(seven);

    ASSERT_EQ(test_container->size(), 1);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}

#endif 
