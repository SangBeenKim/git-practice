// Animal.h

#pragma once

class Animal
{
public:
	Animal(int InAge);

	virtual ~Animal();

	int GetAge() const;

	virtual void MakeSound() const;

	virtual void Eat() = 0;

private:
	int Age;

};
