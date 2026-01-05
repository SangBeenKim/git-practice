// Animal.cpp

#include <iostream>

#include "Animal.h"

Animal::Animal(int InAge)
	: Age(InAge)
{
	std::cout << "Animal(" << InAge << ") has been called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "~Animal() has been called." << std::endl;
}

int Animal::GetAge() const
{
	return Age;
}
