/******************************************************************************
Title           : Project 3: ZooRecord “is-a” Bag of Animals
Author          : Chloe Gottlieb
Created on      : 9/20/2019
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
	friend bool operator==(const Animal& an_animal, const Animal& another_animal);
	void display(); 
	
private: //all private data member for base class Animal live here
	std::string name_;
	bool domestic_;
	bool predator_;
};

#endif