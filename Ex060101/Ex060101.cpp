
#include <iostream>

#include "Animal.h"
#include "Cat.h"

int main()
{
    Animal* MyAnimal = new Animal(5);
    Cat* MyCat = new Cat(3);

    delete MyAnimal;
    MyAnimal = nullptr;

    delete MyCat;
    MyCat = nullptr;

    return 0;
}
