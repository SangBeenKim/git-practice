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

	// Animal 클래스의 소멸자를 명시적으로 호출하지 않았는데도 호출될까?
}
