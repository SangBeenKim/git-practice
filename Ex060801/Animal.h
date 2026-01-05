// Animal.h

#pragma once

class Animal
{
public:
	Animal(int InAge);

	virtual ~Animal();

	int GetAge() const;

	virtual void MakeSound() const;
	// 동물이라면 소리를 내곤 하는데, 어떻게 소리 낼지는 자식들(개, 고양이, ...)에 따라 다르다.

private:
	int Age;

};