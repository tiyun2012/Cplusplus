// #include"my_class.cpp"
#include "animals.h"
#include "grandFather.h"
#include "Father.h"
#include <cstdio> // using for calling stderr
#include<iostream>
#define RED_TEXT "\033[31m"
#define GREEN_TEXT "\033[32m"
#define RESET_TEXT "\033[0m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[96m"

int main() {


//                        ---------GRANDFATHER-------------
  std::cout<<CYAN<<"------------------Grand Father Zone-------------------\n "<<RESET_TEXT;
  std::cout<<GREEN_TEXT<<"static zone:"<<RESET_TEXT<<std::endl;
  grandFather::publish_name_static="grandParent_Static_Static";
  std::cout<<"    grandParent Static_public:"<<grandFather::publish_name_static<<std::endl;

  std::cout<<GREEN_TEXT<<"None static zone:"<<RESET_TEXT<<std::endl;
  // initialize object
  grandFather grandFatherobject("THANH");
  std::cout<<"   grandParen None-Static_public:"<<grandFatherobject.public_name<<std::endl;
  std::cout<<"   full name of grandFather: "<<grandFatherobject.getFullName()<<std::endl;

//                          ---------FATHER A-------------

  std::cout<<CYAN<<"------------------Father Zone------------------- "<<RESET_TEXT<<std::endl;
  std::cout<<GREEN_TEXT<<"static zone:"<<RESET_TEXT<<std::endl;
  // 
  Father::publish_name_static="Father_Static_Static";
  std::cout<<"   grandParent Static_public:"<<Father::publish_name_static<<std::endl;

  std::cout<<GREEN_TEXT<<"None static zone: "<<RESET_TEXT<<std::endl<<std::endl;
  Father fatherObject("Tuan");
  std::cout<<"  Father None-Static_public:"<<fatherObject.public_name<<std::endl;
  //                          ---------FATHER B-------------

  
  std::cout<<std::endl;
  std::cout<<GREEN_TEXT<<"\t-------end-----"<<RED_TEXT<<std::endl<<std::endl;

  /*
    we will test something below here
  */

  return 0;
}