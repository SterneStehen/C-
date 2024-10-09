
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();
j->makeSound();

const Animal * A[4];
A[0] = new Dog();
A[1] = new Dog();
A[2] = new Cat();
A[3] = new Cat();

for (size_t i = 0; i < 4; i++)
{
	A[i]->makeSound();
}
for (size_t i = 0; i < 4; i++)
{
	delete A[i];
}

// Dog basic;
// {
// Dog tmp = basic;
// }

delete j;
delete i;
return 0;
}
