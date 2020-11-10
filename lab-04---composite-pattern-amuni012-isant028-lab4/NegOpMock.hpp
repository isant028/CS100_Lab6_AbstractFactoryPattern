#ifndef __NEGOPMOCK_HPP__
#define __NEGOPMOCK_HPP__
#include <string>
#include "base.hpp"

class NegOpMock : public Base
{
private:
double value;
public:
NegOpMock() { };
virtual double evaluate() {return -2;}
virtual std::string stringify() {return "-2.0"; }
};
 #endif //__NEGOPMOCK_HPP__

