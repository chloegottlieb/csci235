/******************************************************************************
Title           : Project 2: OOP - Inheritance 
Author          : Chloe Gottlieb
Created on      : 9/10/2019
Description     : Interface and implementation for animal class, mammal class, bird class, and fish class. Animal class is the base class and mammal, bird, and fish are the derived classes.
******************************************************************************/
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>


class Animal
{
public: //all public member functions for base class Animal live here
	Animal(); //constructor
	Animal(std::string name, bool domestic = false, bool predator = false);
	std::string getName() const;
	bool isDomestic() const;
	bool isPredator() const;
	void setName(std::string name);
	void setDomestic();
	void setPredator();
	
private: //all private data member for base class Animal live here
	std::string name_;
	bool domestic_;
	bool predator_;
};

#endif