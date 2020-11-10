#ifndef __FOUROPMOCK_HPP__
#define __FOUROPMOCK_HPP__
#include <string>
#include "base.hpp"

class FourOpMock : public Base
{
private:
double value;
public:
FourOpMock() { };
virtual double evaluate() {return 4;}
virtual std::string stringify() {return "4.0"; }
};
 #endif //__FOUROPMOCK_HPP__
