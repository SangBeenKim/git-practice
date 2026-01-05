// Main.cpp

#include <iostream>

#include "Animal.h"
#include "Cat.h"

int main()
{
	Animal* MyAnimal = new Animal(5);
	Animal* MyCat = new Cat(3, "Calico");

	MyAnimal->MakeSound();
	MyCat->MakeSound();

	delete MyAnimal;
	MyAnimal = nullptr;

	delete MyCat;
	MyCat = nullptr;

	return 0;
}