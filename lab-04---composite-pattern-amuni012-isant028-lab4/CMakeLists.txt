CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)
ADD_EXECUTABLE(lab
base.hpp
op.hpp
main.cpp
)
ADD_EXECUTABLE(test
    unit_test.cpp
	base.hpp
op.hpp
op_test.hpp

)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON) 
