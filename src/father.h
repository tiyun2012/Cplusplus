
#pragma once
#include <iostream>
#include <string>
#include"grandFather.h"
class Father : public grandFather 
{
    public:
    //overide GrandFather 
    void sayHello(std::string);  
    Father(std::string);
    ~Father();
};

