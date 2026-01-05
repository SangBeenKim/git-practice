// Cat.h

#pragma once

#include "Animal.h"

class Cat : public Animal
{
public:
	Cat(int InAge);
	Cat(int InAge, const char* InFurPattern);

	virtual ~Cat();
	// 부모 클래스의 멤버 함수에 virtual 키워드가 붙으면,
	// 자식 클래스에서도 virtual 효과가 상속됨. 그래서 안붙혀도 되나, 명시적으로 작성해준 것.

	virtual void MakeSound() const override;

public:
	char* FurPattern;

};

