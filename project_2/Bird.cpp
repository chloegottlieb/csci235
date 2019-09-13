/******************************************************************************
Title           : Project 2: OOP - Inheritance 
Author          : Chloe Gottlieb
Created on      : 9/10/2019
Description     : Interface and implementation for animal class, mammal class, bird class, and fish class. Animal class is the base class and mammal, bird, and fish are the derived classes.
******************************************************************************/
#include "Animal.hpp"
#include "Bird.hpp"
#include <iostream>

Bird::Bird() { //initializing all the functions in the constructor
	airborne_ = false;
	aquatic_= false;
}

Bird::Bird(std::string name , bool domestic, bool predator): Animal(name, domestic, predator) { //initialized list because variables are private members of Animal
	airborne_ = false;
	aquatic_= false;
}

bool Bird::isAquatic() const {
  return aquatic_; // accessor for aquatic
}

bool Bird::isAirborne() const {
  return airborne_; // accessor for airborne
}

void Bird::setAquatic(){
  aquatic_ = true; // mutator for aquatic
}

void Bird::setAirborne(){
  airborne_ = true; // mutator for airborne
}