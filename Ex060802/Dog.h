// Dog.h

#pragma once

#include "Animal.h"

class Dog : public Animal
{
public:
	Dog();

	virtual void MakeSound() const override;

	virtual void Eat() override;
	// 동물이라면 무조건 해야하는 행동을 재정의.

};
