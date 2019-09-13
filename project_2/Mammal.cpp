/******************************************************************************
Title           : Project 2: OOP - Inheritance 
Author          : Chloe Gottlieb
Created on      : 9/10/2019
Description     : Interface and implementation for animal class, mammal class, bird class, and fish class. Animal class is the base class and mammal, bird, and fish are the derived classes.
******************************************************************************/
#include "Animal.hpp"
#include "Mammal.hpp"
#include <iostream>

Mammal::Mammal() { //initializing all the functions in the constructor
  hair_ = false;
  airborne_ = false;
  aquatic_ = false;
  toothed_ = false;
  fins_ = false;
  tail_ = false;
  legs_ = 0; 
}


Mammal::Mammal(std::string name , bool domestic, bool predator): Animal(name, domestic, predator) { //initialized list because variables are private members of Animal
  hair_ = false;
  airborne_ = false;
  aquatic_ = false;
  toothed_ = false;
  fins_ = false;
  tail_ = false;
  legs_ = 0; 
}

bool Mammal::hasHair() const { 
  return hair_; // accessor for hair
}

bool Mammal::isAirborne() const {
  return airborne_; // accessor for airborne
}

bool Mammal::isAquatic() const {
  return aquatic_; // accessor for aquatic
}

bool Mammal::isToothed() const {
  return toothed_; // accessor for toothed
}

bool Mammal::hasFins() const {
  return fins_; // accessor for fins
}

bool Mammal::hasTail() const {
  return tail_; // accessor for tail
}

int Mammal::legs() const {
  return legs_; // accessor for legs
}

void Mammal::setHair(){
  hair_ = true; // mutator for hair
}

void Mammal::setAirborne(){
  airborne_ = true; // mutator for airborne
}

void Mammal::setAquatic(){
  aquatic_ = true; // mutator for aquatic
}

void Mammal::setToothed(){
  toothed_ = true; // mutator for toothed
}

void Mammal::setFins(){
  fins_ = true; // mutator for fins
}

void Mammal::setTail(){
  tail_ = true; // mutator for tail
}

void Mammal::setLegs(int legs){
  legs_ = legs; // mutator for legs
}