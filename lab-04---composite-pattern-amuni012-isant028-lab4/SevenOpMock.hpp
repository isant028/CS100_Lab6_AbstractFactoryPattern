#ifndef __SEVENOPMOCK_HPP__
#define __SEVENOPMOCK_HPP__
#include "base.hpp"
#include <string>
class SevenOpMock:public Base{ 

    private:
    double value;
    public:
    SevenOpMock() { };
    virtual double evaluate() { return 7.5; }
    virtual std::string stringify() {return "7.5";  }
};

#endif //__SEVENOPMOCK_HPP__

