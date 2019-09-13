/******************************************************************************
Title           : Project 2: OOP - Inheritance 
Author          : Chloe Gottlieb
Created on      : 9/10/2019
Description     : Interface and implementation for animal class, mammal class, bird class, and fish class. Animal class is the base class and mammal, bird, and fish are the derived classes.
******************************************************************************/
#include "Animal.hpp"
#include "Fish.hpp"
#include <iostream>

Fish::Fish() { //initializing all the functions in the constructor
	venomous_ = false; 
}

Fish::Fish(std::string name , bool domestic, bool predator): Animal(name, domestic, predator) { //initialized list because variables are private members of Animal
  venomous_ = false;
}

bool Fish::isVenomous() const {
  return venomous_; // accessor
}

void Fish::setVenomous(){
  venomous_ = true; // mutator
}