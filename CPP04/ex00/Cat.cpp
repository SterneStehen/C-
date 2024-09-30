/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:06:01 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/30 21:37:32 by smoreron         ###   ########.fr       */
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
