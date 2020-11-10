#ifndef __ZEROOPMOCK_HPP__
#define __ZEROOPMOCK_HPP__
#include <string>
#include "base.hpp"

class ZeroOpMock : public Base
{
private:
double value;
public:
ZeroOpMock() { };
virtual double evaluate() {return 0;}
virtual std::string stringify() {return "0.0"; }
};
 #endif //__ZEROOPMOCK_HPP__
