/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:06:01 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 15:14:07 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	Animal::setType("Cat");
	std::cout << "craerted Cat class" << std::endl;
}


Cat::Cat(const Cat& other) {
    std::cout << "Cat copied" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat assigned" << std::endl;
    if (this != &other) 
	{
        setType(other.getType());
    }
    return *this;
};


Cat::~Cat()
{
	std::cout << "destr Cat class" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat say Mau" << std::endl;
}

// std::string Cat::getType() const{
// 	return type;
// }
