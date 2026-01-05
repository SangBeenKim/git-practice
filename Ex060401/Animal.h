// Animal.h

#pragma once

class Animal
{
public:
	Animal(int InAge);

	~Animal();

	int GetAge() const;

	void MakeSound() const;

private:
	int Age;

};
