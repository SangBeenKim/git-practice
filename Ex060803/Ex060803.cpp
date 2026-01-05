// Main.cpp

#include <iostream>

#include "Animal.h"
#include "Cat.h"
#include "IWalkable.h"

int main()
{
	Cat* MyCat = new Cat(5);
	IWalkable* ICat = new Cat(3);

	MyCat->MakeSound();
	MyCat->Eat();
	MyCat->Walk();
	ICat->Walk();

	delete MyCat;
	MyCat = nullptr;

	return 0;
}
