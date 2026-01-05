// Dog.cpp

#include <iostream>

#include "Dog.h"

Dog::Dog()
	: Animal(10.f)
{
}

void Dog::MakeSound() const
{
	std::cout << "Woof!" << std::endl;
}

