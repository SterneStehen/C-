/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:42:40 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/15 15:15:12 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	int *data;
	const int e = 8;
public:
	Fixed(int value);
	~Fixed();
	Fixed(const Fixed& other);
	// void setRawBits(int const raw);
	// int getRawBits(void) const;
	int getData();
};

Fixed::Fixed(int value)
{
	data = new int(value);
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	delete data;
	std::cout << "Destructor called" << std::endl;

}

Fixed::Fixed(const Fixed& other)
{
	
	data = new int(*(other.data));
	std::cout << "Copy constructor called" << std::endl;
}

int Fixed::getData()
{
	return *data;
};


int main()
{
	Fixed a(10);
	Fixed b = a;

	std::cout << "return vaule a = " << a.getData() << std::endl;
	std::cout << "return vaule b = " << b.getData() << std::endl;

}