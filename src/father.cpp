#include "father.h"
#include<iostream>
#include<string>

void Father::sayHello(std::string)
{
    std::cout << " here is say hello from Fathers" << std::endl;
}

Father::Father(std::string fatherName):grandFather(fatherName)
{
    std::cout << "initialize  Father class!" << std::endl;
}

Father::~Father()
{
    std::cout << "remove  Father class!" << std::endl;
}
