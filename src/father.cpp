#include "father.h"
#include<iostream>
#include<string>

std::string Father::sayHello(std::string words)
{
    return (std::string("Father ")+words);
}

std::string Father::sayHelloA(std::string words)
{
    return (std::string("Father here: ")+ words);
}

Father::Father(std::string fatherName):grandFather(fatherName)
{
    std::cout << "initialize  Father class!" << std::endl;
}

Father::~Father()
{
    std::cout << "remove  Father class!" << std::endl;
}
