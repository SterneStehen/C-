/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:55:22 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/30 21:55:23 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
	Animal::setType("Cat");
	std::cout << "craerted Cat class" << std::endl;
}

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
