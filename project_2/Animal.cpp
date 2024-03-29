/******************************************************************************
Title           : Project 2: OOP - Inheritance 
Author          : Chloe Gottlieb
Created on      : 9/10/2019
Description     : Interface and implementation for animal class, mammal class, bird class, and fish class. Animal class is the base class and mammal, bird, and fish are the derived classes.
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
