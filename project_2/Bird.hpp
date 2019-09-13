/******************************************************************************
Title           : Project 2: OOP - Inheritance 
Author          : Chloe Gottlieb
Created on      : 9/10/2019
Description     : Interface and implementation for animal class, mammal class, bird class, and fish class. Animal class is the base class and mammal, bird, and fish are the derived classes.
******************************************************************************/

#ifndef BIRD_HPP
#define BIRD_HPP
#include "Animal.hpp"
#include <iostream>

class Bird: public Animal {
public: //all the public member functions of the Bird class, derived from base class Animal (the class, not the member functions), live here
	Bird();
	Bird(std::string name, bool domestic = false, bool predator = false);
	bool isAirborne() const;
	bool isAquatic() const;
	void setAirborne();
	void setAquatic();

private: //all the private data members of the Bird class, derived from base class Animal (the class, not the member functions), live here
	bool airborne_;
	bool aquatic_; 
};

#endif