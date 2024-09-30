
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain* brain;
public:
	Dog();
	~Dog();

	
	//std::string getType() const;
	void makeSound() const;
	
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
};

#endif