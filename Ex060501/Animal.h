// Animal.h

#pragma once

class Animal
{
public:
	Animal(int InAge);

	~Animal();

	int GetAge() const;

	//void MakeSound() const;
	virtual void MakeSound() const; // 동적 바인딩

private:
	int Age;

};
