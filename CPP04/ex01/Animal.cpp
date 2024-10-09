/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:55:15 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 14:35:48 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << "created Animal class" << std::endl;
}

Animal::~Animal()
{
	std::cout << "destr Animal class" << std::endl;
}
Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal assigned" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}
void Animal::setType(const std::string& nType){ 
	type = nType;
	}

std::string Animal::getType() const{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "Animal says nothing" << std::endl;
}



class Dog: public Animal
{
private:
	//std::string type;
public:
	Dog(/* args */);
	~Dog();

	
	//std::string getType() const;
	void makeSound() const;
};




