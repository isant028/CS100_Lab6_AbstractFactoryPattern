#include "gtest/gtest.h"

//#include "op_test.hpp"

//#include "Mult_Test.hpp"
//#include "div_test.hpp"
//#include "sub_test.hpp"
//#include "add_test.hpp" 
//#include "pow_test.hpp"
//#include "Rand_Test.hpp"
#include "listcontainer_test.hpp"
#include "VectorContainer_test.hpp"
#include "sortTest_test.hpp" 
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
