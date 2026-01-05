// Cat.cpp

#include <iostream>
#include <cstring>

#include "Cat.h"

Cat::Cat(int InAge)
	: Animal(InAge)
	, FurPattern(nullptr)
{
	std::cout << "Cat(" << InAge << ") has been called." << std::endl;
}

Cat::Cat(int InAge, const char* InFurPattern)
	: Animal(InAge)
	, FurPattern(nullptr)
{
	std::cout << "Cat(" << InAge << ", " << InFurPattern << ") has been called." << std::endl;

	if (InFurPattern != nullptr)
	{
		size_t Length = strlen(InFurPattern) + 1u;
		FurPattern = new char[Length];
		strcpy_s(FurPattern, Length, InFurPattern);
	}
}

Cat::~Cat()
{
	std::cout << "~Cat() has been called." << std::endl;

	delete[] FurPattern;
	FurPattern = nullptr;
}

void Cat::MakeSound() const
{
	std::cout << "Meow~" << std::endl;
}

void Cat::Eat()
{
	std::cout << "The cat is eating Churu." << std::endl;
}

void Cat::Walk() const
{
	std::cout << GetAge() << " The cat is walking." << std::endl;
}
