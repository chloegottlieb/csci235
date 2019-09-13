/******************************************************************************
Title           : Project 1: OOP - a very simple class
Author          : Chloe Gottlieb
Created on      : 9/4/2019
Description     : Interface and implementation for animal class
******************************************************************************/

#include "Animal.hpp"
#include "Animal.cpp"
#include <iostream>
#include <string>
int main() 
{
  Animal animal1("Dog", true, false);
  Animal animal2("Cat", true);
  animal1.setName("Dog");
  animal1.setDomestic();
  animal1.setPredator();
  animal2.setName("Cat");
  animal2.setDomestic();
  animal2.setPredator();

  std::cout << animal1.getName() << std::endl;
  std::cout << animal1.isDomestic() << std::endl;
  std::cout << animal1.isPredator() << std::endl;

  std::cout << animal2.getName() << std::endl;
  std::cout << animal2.isDomestic() << std::endl;
  std::cout << animal2.isPredator() << std::endl;
  return 0;
}

// int main() {
//   Animal animal1("Dog",true,false);
//   Animal animal2("Cat", true);
//   animal1.setName("Dog");
//   animal1.setDomestic();
//   animal1.setPredator();

//   std::cout << animal1.getName() << std::endl;
//   std::cout << animal1.isDomestic() << std::endl;
//   std::cout << animal1.isPredator() << std::endl;
//   return 0;
// }
