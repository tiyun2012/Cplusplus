
#pragma once
#include <iostream>
#include <string>

class grandFather
{
private:
    /* data */
    static  int member_count;
    static const std::string LastName;
    const std::string fullName;
    const std::string firstname;

public:
    static  std::string publish_name_static;
    std::string public_name="public_name_noneStatic grandFather";
    std::string getLastName();
    void sayHello(std::string);
    std::string getName(); 
    std::string getFullName();
    grandFather(std::string);
    ~grandFather();
};

