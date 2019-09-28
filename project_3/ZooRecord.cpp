/******************************************************************************
Title           : Project 3: ZooRecord “is-a” Bag of Animals
Author          : Chloe Gottlieb
Created on      : 9/20/2019
******************************************************************************/
#include "ZooRecord.hpp"
#include "Animal.hpp"
//#include "ArrayBag.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

ZooRecord::ZooRecord():ArrayBag()
{

}//end default constructor

/**parameterized constructor
	 @pre the input file is expected to be in CSV
	 (comma separated value) format as:
	 "animal_name,hair,feathers,eggs,milk,airborne,aquatic,predator,toothed,
	 backbone,breathes,venomous,fins,legs,tail,domestic,catsize,class_type\n"
	 @param input_file_name the name of the input file
	 @post adds Animal objects to record as per the data in the input file
	 **/
ZooRecord::ZooRecord(std::string input_file_name):ArrayBag()
{
	//reading file (from zoo.csv)


	//this function uses fstream to read from the zoo.csv file and use that information to reach display, both in this file and in animal, and print the relevant info
	std::ifstream file(input_file_name);

	std::string animal;
	std::string garbage;
 
 	getline(file, garbage);

	while(getline(file, animal))
	{

		bool domestic;
		bool predator;
		
		std::istringstream animal_(animal);
		std::string animal_name;
		std::string hair;
		std::string feathers;
		std::string eggs;
		std::string milk;
		std::string airborne;
		std::string domestic_string;
		std::string predator_string;
		std::string aquatic;
		
		std::string toothed;
		std::string backbone;
		std::string breathes;
		std::string venomous;
		std::string fins;
		std::string legs;
		std::string tail;
	
		std::string catsize;
		std::string class_type;

		getline(animal_, animal_name, ',');
		getline(animal_, hair, ',');
		getline(animal_, feathers, ',');
		getline(animal_, eggs, ',');
		getline(animal_, milk, ',');
		getline(animal_, airborne, ',');
		getline(animal_, aquatic, ',');
		getline(animal_, predator_string, ',');
		getline(animal_, toothed, ',');
		getline(animal_, backbone, ',');
		getline(animal_, breathes, ',');
		getline(animal_, venomous, ',');
		getline(animal_, fins, ',');
		getline(animal_, legs, ',');
		getline(animal_, tail, ',');
		getline(animal_, domestic_string, ',');
		getline(animal_, catsize, ',');
		getline(animal_, class_type);


		if(predator_string == "1")
  		{
  			predator = true;
  		}
  		else
  		{
  			predator = false;
  		}
  		
  		if(domestic_string == "1")
  		{
  			domestic = true;
  		}
  		else
  		{
  			domestic = false;
  		}


  		
  		add(Animal(animal_name, domestic, predator));
	}

	// std::ifstream fin;
	// fin.open(input_file_name.c_str())
 //  	std::string first_line, line, animal, irrelevant, irrelevant_2, predator_string, domestic_string;
 //  	bool predator = false;
 //  	bool domestic = false;
 //  	std::getline(fin, first_line);
 //  	while(std::getline(fin, line))
 //  	{
 //  		std::stringstream s(line);
 //  		std::getline(s, animal, ',');
 //  		for (int i = 0; i < 6; i++)
 //  		{
 //  			std::getline(s, irrelevant, ',');
 //  		}
 //  		std::getline(s, predator_string, ',');
 //  		if(predator_string == "1")
 //  		{
 //  			predator = true;
 //  		}
 //  		else
 //  		{
 //  			predator = false;
 //  		}
 //  		for (int i = 0; i < 6; i++)
 //  		{
 //  			std::getline(s, irrelevant_2, ',');
 //  		}
 //  		std::getline(s, domestic_string, ',');
 //  		if(domestic_string == "1")
 //  		{
 //  			domestic = true;
 //  		}
 //  		else
 //  		{
 //  			domestic = false;
 //  		}
 //  		Animal temporary = Animal(animal, domestic, predator);
 //  		add(temporary);
 //  	}
  	
  	
}

void ZooRecord::display()
{
	int size = getCurrentSize();
	for (int i = 0; i < size; i++)
   {
      items_[i].display();
   }
}


