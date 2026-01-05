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
	// 모든 동물이라면 무조건! 이 행동을 해야 한다.
	// 그래서 나는 이 행동에 대한 정의를 강제해야 겠다. -> 순수가상함수.
	// ex) 무릇 동물이라 함은, 먹는 행동은 꼭 하기 때문에 Eat() 함수를 강제하고 싶다.

private:
	int Age;

};
