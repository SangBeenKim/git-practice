// Cat.h

#pragma once

#include "Animal.h"

class Cat : public Animal
{
public:
	Cat(int InAge);
	Cat(int InAge, const char* InFurPattern);

	~Cat();

	virtual void MakeSound() const override;

public:
	char* FurPattern;

};

