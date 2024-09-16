/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:52:51 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/16 15:56:17 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class Fixed
{
private:
	int data;
	const int bits = 8;
public:
	Fixed();
	Fixed(int input);
	//Fixed(int value);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other2);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	//int getData();
	void ft_print ();
	~Fixed();
};


Fixed::Fixed() : data(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(int input)
{
	data = (input << bits);
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
void Fixed::ft_print ()
{
	std::cout << "data = " << data << std::endl;
}

int main( void ) {
Fixed a;
a.ft_print();
// Fixed const b( 10 );
// Fixed const c( 42.42f );
// Fixed const d( b );
// a = Fixed( 1234.4321f );
//std::cout << "a is " << a << std::endl;
// std::cout << "b is " << b << std::endl;
// std::cout << "c is " << c << std::endl;
// std::cout << "d is " << d << std::endl;
// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}

// int main( void ) 
// {
// Fixed a;
// Fixed b( a );
// Fixed c;
// c = b;
// std::cout << a.getRawBits() << std::endl;
// std::cout << b.getRawBits() << std::endl;
// std::cout << c.getRawBits() << std::endl;
// return 0;
// }