// Main.cpp

#include <iostream>

#include "Animal.h"
#include "Cat.h"

int main()
{
	Animal* MyAnimal = new Animal(5);
	Animal* MyCat = new Cat(3);
	// MyAnimal이나 MyCat이나 둘다 같은 Animal 클래스.
	// 다만, 생성자만 다른 걸 호출함.

	MyAnimal->MakeSound(); // "???"이 출력.
	MyCat->MakeSound();    // 이게 고민됨.

	delete MyAnimal;
	MyAnimal = nullptr;

	delete MyCat;
	MyCat = nullptr;

	return 0;
}

