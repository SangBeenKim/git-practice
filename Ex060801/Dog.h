// Dog.h

#pragma once

#include "Animal.h"

class Dog : public Animal
{
public:
	Dog();

	virtual void MakeSound() const override;
	// 동물이라면 하는 행동을 "자신만의 방식으로" 재정의.

};
