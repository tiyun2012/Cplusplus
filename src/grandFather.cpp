#include "grandFather.h"
#include<string>
// std::string grandFather:: public_name="public_name_A";// this is invalid because this is non-standard, it is belong to class object, need to declare inside class.
std::string grandFather::publish_name_static="publish_name_A_static";
grandFather::grandFather()
{
}

grandFather::~grandFather()
{
}
