// Main.cpp

#include <iostream>

#include "Animal.h"
#include "Dog.h"

int main()
{
	Dog* MyDog = new Dog();

	MyDog->MakeSound();
	MyDog->Eat();

	delete MyDog;
	MyDog = nullptr;

	return 0;
}

