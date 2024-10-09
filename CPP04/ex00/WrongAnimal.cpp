/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 04:26:07 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 15:30:20 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Animal")
{
	std::cout << "created WrongAnimal class" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    std::cout << "WrongAnimal assigned" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "destr WrongAnimal class" << std::endl;
}

void WrongAnimal::setType(const std::string& nType){ 
	type = nType;
	}

std::string WrongAnimal::getType() const{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal says nothing" << std::endl;
}
 