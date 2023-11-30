// #include"my_class.cpp"
#include "animals.h"
#include "grandFather.h"
#include <cstdio> // using for calling stderr
#include<iostream>

int main() {


  // log_to_file("Application started\n");

  //   int error_code = 42;
  //   const char* error_message = "An error occurred";
  //   log_to_file("Error (%d): %s\n", error_code, error_message);
  //   std::cout << error_message << std::endl;
  //   log_to_file("Application ended\n");
    //
  // access public methods and attributes
    //----Static members
  // Animals::staticFunction_public("staticFunction_public world");
  // std::cout<<"name_Static_public:"<<Animals::name_Static_public<<std::endl;
  //   // None-Static members
  // Animals animal;
  // animal.non_staticFunction_publish("non_staticFunction_public");
  // std::cout<<"name_None_Static_public:"<<animal.name_None_Static_public<<std::endl;
  grandFather::publish_name_static="grandParent_Static_Static";
  std::cout<<"grandParent_Static_public:"<<grandFather::publish_name_static;
  
  return 0;
}