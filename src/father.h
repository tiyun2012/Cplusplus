
#pragma once
#include <iostream>
#include <string>
#include"grandFather.h"
class Father : public grandFather 
{
    public:
    //overide GrandFather 
    // compare virtual and None virtual Functions
    virtual std::string sayHello(std::string);
    std::string  sayHelloA(std::string);   
    Father(std::string);
    ~Father();
};

