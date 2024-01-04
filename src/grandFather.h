
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
    
    std::string getName(); 
    std::string getFullName();
    int getMemberCount();
    // virtual and non-virtual fuction 
    virtual std::string  sayHello(std::string); 
    std::string  sayHelloA(std::string); 
    // construction
    grandFather(std::string);
    ~grandFather();
};

