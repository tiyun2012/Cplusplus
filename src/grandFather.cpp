#include "grandFather.h"
#include<string>
// --------------static-----------------
// variables:
std::string grandFather::publish_name_static="publish_name_A_static";
const std::string grandFather::LastName="PHAN";
int grandFather::member_count=0;
// fuctions
// ---------------None static-----------------

//variables:
// function:
// none-virtual functions

std::string grandFather::getFullName()
{
    return fullName;
}
int grandFather::getMemberCount()
{
    return member_count;
}
std::string grandFather::getName()
{
    return firstname;
}


std::string grandFather::getLastName()
{
    return std::string();
}
// compare virtual and NoneVirtual functions
std::string grandFather::sayHello(std::string words)
{
    return (std::string("grandFather")+words);
}

std::string grandFather::sayHelloA(std::string words)
{
    return (std::string("grandFather: ")+ words);
}

// -----constructiop function-------------
grandFather::grandFather(std::string first_name) : 
firstname(first_name), 
fullName(first_name +std::string(" ")+LastName) 
{
    std::cout << "--->initialized grandfather" << std::endl;
    ++member_count;
}

grandFather::~grandFather() {
    std::cout << "--->remove grandfather" << std::endl;
    --member_count;
}

