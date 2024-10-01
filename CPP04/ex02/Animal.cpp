/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:55:15 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/01 14:39:03 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(): type("Animal")
{
	std::cout << "created Animal class" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "destr Animal class" << std::endl;
}

void AAnimal::setType(const std::string& nType){ 
	type = nType;
	}

std::string AAnimal::getType() const{
	return type;
}


AAnimal& AAnimal::operator=(const AAnimal& other) {
    std::cout << "Animal assigned" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

AAnimal::AAnimal(const AAnimal& other): type(other.type) {
    std::cout << "Animal copied" << std::endl;
}







