// Cat.h

#pragma once

#include "Animal.h"
#include "IWalkable.h"

class Cat
	: public Animal
	, public IWalkable
{
public:
	Cat(int InAge);
	Cat(int InAge, const char* InFurPattern);

	virtual ~Cat();

	virtual void MakeSound() const override;

	virtual void Eat() override;

	virtual void Walk() const override;

public:
	char* FurPattern;

};

