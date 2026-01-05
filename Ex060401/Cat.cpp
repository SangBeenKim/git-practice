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

void Cat::MakeSound() const
{
	std::cout << "Meow~" << std::endl;
	// 부모 클래스의 MakeSound() 함수를 나름 재정의 한다고 해본 것.
};
