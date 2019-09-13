/******************************************************************************
Title           : Project 1: OOP - a very simple class
Author          : Chloe Gottlieb
Created on      : 9/4/2019
Description     : Interface and implementation for animal class
******************************************************************************/

#include <iostream>
//#include <string>

class Animal
{
public: //all public member functions live here
	Animal(); //constructor
	Animal(std::string name, bool domestic = false, bool predator = false);
	std::string getName() const;
	bool isDomestic() const;
	bool isPredator() const;
	void setName(std::string name);
	void setDomestic();
	void setPredator();
	
private: //all private member functions live here
	std::string name_;
	bool domestic_;
	bool predator_;
};