/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:43:13 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 14:53:47 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
	Animal::setType("Dog");
	//this->type = "Dog";
    this->brain = new Brain();
	std::cout << "craerted Dog class" << std::endl;
}

Dog::~Dog()
{
	std::cout << "destr Dog class" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "Dog say Gav" << std::endl;
}


Dog::Dog(const Dog& other): Animal(other) {
    std::cout << "Dog copied" << std::endl;
    this->brain = new Brain(*other.brain);
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other) { 
        this->setType(other.getType());
        *(this->brain) = *(other.brain);
    }
    std::cout << "Dog operator run" << std::endl;
    return *this;
}