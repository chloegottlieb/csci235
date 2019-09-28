/******************************************************************************
Title           : Project 3: ZooRecord “is-a” Bag of Animals
Author          : Chloe Gottlieb
Created on      : 9/20/2019
******************************************************************************/
#include <iostream>
#include "Animal.hpp"

//default constructor
Animal::Animal() { 
  name_ = " ";
  domestic_ = false;
  predator_ = false;
}

//private members with params set 
Animal::Animal(std::string name , bool domestic, bool predator) {
  name_ = name;
  domestic_ = domestic;
  predator_ = predator;
}
//accessor for name
std::string Animal::getName() const {
  return name_; // private member
}

//accessor for domestic_
bool Animal::isDomestic() const {
  return domestic_; // private member
}

//accessor for predator_
bool Animal::isPredator() const {
  return predator_; // private member
}

//mutator for name_
void Animal::setName(std::string name) {
  name_ = name;
}

//mutator for domestic
void Animal::setDomestic(){
  domestic_ = true;
}

//mutator for predator_
void Animal::setPredator(){
  predator_ = true;
}

bool operator==(const Animal& an_animal, const Animal& another_animal)
{
  return an_animal.getName() == another_animal.getName() && an_animal.isDomestic() == another_animal.isDomestic() && an_animal.isPredator() == another_animal.isPredator();
}

void Animal::display(){
  std::string domestic_string = "";
  std::string predator_string = "";
  if (isDomestic() == true)
  {
    domestic_string = "domestic ";
  }
  else
  {
    domestic_string = "not domestic ";
  }

  if (isPredator() == true)
  {
    predator_string = "it is a predator";
  }
  else
  {
    predator_string = "is not a predator";
  }
  std::cout << getName() << " is " << domestic_string << "and " << predator_string << std::endl;
}