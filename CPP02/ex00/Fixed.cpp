/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:42:40 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/15 18:50:16 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): data(0)
{
	std::cout << "Default constructor called" << std::endl;
}
// Fixed::Fixed(int value): data(0)
// {
// 	//data = new int(value);
// 	std::cout << "Default constructor  with argument called" << std::endl;
// }

Fixed::~Fixed()
{
	//delete data;
	std::cout << "Destructor called" << std::endl;

}

Fixed::Fixed(const Fixed& other)
{
	
	//data = new int(*(other.data));
	std::cout << "Copy constructor called" << std::endl;
	data = (other.getRawBits());
	
}

Fixed& Fixed::operator=(const Fixed& other2)
{
	std::cout << "Assignation operator called" << std::endl;
	if(this != &other2)
		data = other2.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	data = raw;
	std::cout << "setRawBits member function called" << std::endl;
	
}
int Fixed::getRawBits(void) const
{
	
	std::cout << "getRawBits member function called" << std::endl;
	return data;
}
