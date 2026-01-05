// Cat.cpp

#include <iostream>

#include "Cat.h"

Cat::Cat(int InAge)
	: Animal(InAge)
{
	std::cout << "Cat(" << InAge << ") has been called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "~Cat() has been called." << std::endl;
}
