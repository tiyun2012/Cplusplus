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
void grandFather::sayHello(std::string)
{
    std::cout << " here is say hello from grandFathers" << std::endl;
}

std::string grandFather::getFullName()
{
    return fullName;
}
std::string grandFather::getName()
{
    return firstname;
}


std::string grandFather::getLastName()
{
    return std::string();
}

// -----constructiop function--------------



// grandFather::grandFather(std::string fisrt_name)
// {
//     std::cout << "--->initialized grandfather" << std::endl;
//     ++member_count;
//     std::string fullName_ = fisrt_name+LastName;
//     const std::string& fullName=fullName_;
//     const std::string& firstname=fisrt_name;

    
// }
grandFather::grandFather(std::string first_name) : firstname(first_name), fullName(first_name + LastName) {
    std::cout << "--->initialized grandfather" << std::endl;
    ++member_count;
}

grandFather::~grandFather() {
    std::cout << "--->remove grandfather" << std::endl;
    --member_count;
}

