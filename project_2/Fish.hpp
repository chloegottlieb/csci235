/******************************************************************************
Title           : Project 2: OOP - Inheritance 
Author          : Chloe Gottlieb
Created on      : 9/10/2019
Description     : Interface and implementation for animal class, mammal class, bird class, and fish class. Animal class is the base class and mammal, bird, and fish are the derived classes.
******************************************************************************/

#ifndef FISH_HPP
#define FISH_HPP
#include "Animal.hpp"
#include <iostream>

class Fish: public Animal { 
public: //all the public member functions of the class Fish, derived from base class Animal (the class, not the member functions), live here
	Fish();
	Fish(std::string name, bool domestic = false, bool predator = false);
	bool isVenomous() const;
	void setVenomous();

private: //all the private data members of the Fish class, derived from base class Animal (the class, not the member functions), live here
	bool venomous_;
};

#endif