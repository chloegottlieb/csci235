/******************************************************************************
Title           : Project 2: OOP - Inheritance 
Author          : Chloe Gottlieb
Created on      : 9/10/2019
Description     : Interface and implementation for animal class, mammal class, bird class, and fish class. Animal class is the base class and mammal, bird, and fish are the derived classes.
******************************************************************************/

#ifndef MAMMAL_HPP
#define MAMMAL_HPP
#include "Animal.hpp"
#include <iostream>

class Mammal: public Animal {
public: //all the public member functions of the Mammal class, derived from base class Animal (the class, not the member functions), live here
	 Mammal();
	 Mammal(std::string name, bool domestic = false, bool predator = false);
	 bool hasHair() const;
	 bool isAirborne() const;
	 bool isAquatic() const;
	 bool isToothed() const;
	 bool hasFins() const;
	 bool hasTail() const;
	 int legs() const;
	 void setHair();
	 void setAirborne();
	 void setAquatic();
	 void setToothed();
	 void setFins();
	 void setTail();
	 void setLegs(int legs);
 
private: //all the private data members of the Mammal class, derived from base class Animal (the class, not the member functions), live here
	 bool hair_;
	 bool airborne_;
	 bool aquatic_;
	 bool toothed_;
	 bool fins_;
	 bool tail_;
	 int legs_; 
};

#endif