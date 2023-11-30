#include "animals.h"

void Animals::non_staticFunction_protected(const std::string& str) 
{
std::cout << str <<" i am protected and none-static "<< std::endl;
};
void Animals::staticFunction_protected(const std::string& str)
{
std::cout<< str<<": I AM staticFunction_protected"<<std::endl;
};
void Animals::non_staticFunction_publish(const std::string& str)
{
std::cout<< str<<": I AM non_staticFunction_publish"<<std::endl;
};
void Animals::staticFunction_public(const std::string& str)
{
std::cout<< str<<": I AM staticFunction_publish"<<std::endl;

};
const std::string Animals::name_Static_public=std::string("name_Static_public");