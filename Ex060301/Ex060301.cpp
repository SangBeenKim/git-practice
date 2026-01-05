// Main.cpp

#include <iostream>

#include "Animal.h"
#include "Cat.h"

int main()
{
	Animal* MyAnimal = new Animal(5);
	Cat* MyCat = new Cat(3);

	std::cout << "MyAnimal's age: " << MyAnimal->GetAge() << std::endl;
	std::cout << "MyCat's age: " << MyCat->GetAge() << std::endl;

	delete MyAnimal;
	MyAnimal = nullptr;

	delete MyCat;
	MyCat = nullptr;

	return 0;
}

