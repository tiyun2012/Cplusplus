// Make sure this header file is included only once in a single compilation.
#pragma once

// Include the iostream library for input and output operations.
#include<iostream>

// The class keyword is used to define a new type, which is an abstract data type.
class Animals
{
    // The 'protected' keyword specifies access level for members (variables, functions) and 
    // bases. When a class member is protected, it can be accessed from within the class 
    // and its derived classes.
    protected:
    
    // Declare a protected member variable named 'name' of type std::string. 
    // This variable can be accessed and modified by member functions of this class and 
    // any class that inherits from this class.
    std::string name_protected;

    // Declare a member function named 'normalFunction' which takes a const std::string 
    // reference as a parameter and doesn't return anything (void). The 'const' keyword 
    // means the function can't modify the string, and passing by reference ('&') is 
    // more efficient for large types like std::string, because it avoids making a copy.
    // This is a non-static member function, so it operates on an instance of the class.
    void non_staticFunction_protected(const std::string& str);

    // Declare a static member function named 'staticFunction' which takes a const 
    // std::string reference as a parameter and doesn't return anything (void). 
    // Static member functions can be called directly using the class name and don't 
    // operate on an instance of the class, so they can't access non-static member variables 
    // or non-static member functions directly.
    static void staticFunction_protected(const std::string& str);

    // End of protected members.
    public:
    // None-static members
    std::string name_None_Static_public="name_None_Static_public";
    void non_staticFunction_publish(const std::string& str);
    // static members
    // static const std::string name_Static_public="name_Static_public";  // error: in-class initialization of static data member 'const string 
    static const std::string name_Static_public;
    static void staticFunction_public(const std::string& str);
};
