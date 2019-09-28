#include "ArrayBag.hpp"
#include "Animal.hpp"
#include "ZooRecord.hpp"

#include <iostream>
#include <string>

int main()
{
	ZooRecord rec("zoo.csv");

	ArrayBag <int> array1;
	ArrayBag <int> array2;
	//array1.display();
	array1.add(1);
	array1.add(2);
	array1.add(3);
	array1.add(4);
	array2.add(5);
	array2.add(6);
	array2.add(7);
	array2.add(8);
	// array1+=(array2);
	 array1/=(array2);

	// array1.operator-=(array1);
	// array1.operator+=(array1);
	array1.display();
	//array2.display();
	rec.display();
	rec.getCurrentSize();
	return 0;
}