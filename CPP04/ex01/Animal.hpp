
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
private:
	std::string type;
public:
	Animal();
	Animal& operator=(const Animal& other);
	virtual ~Animal();
	
	void setType(const std::string& nType);
	virtual std::string getType() const;
	
	virtual  void makeSound() const;
};

#endif