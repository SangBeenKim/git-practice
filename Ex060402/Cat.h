// Cat.h

#pragma once

#include "Animal.h"

class Cat : public Animal
{
public:
	Cat(int InAge);
	Cat(int InAge, const char* InFurPattern);

	~Cat();

	void MakeSound() const;

public:
	char* FurPattern;

};

