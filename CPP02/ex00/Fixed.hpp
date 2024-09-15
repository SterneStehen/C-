/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:07:13 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/15 15:08:32 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	int *data;
	const int e = 8;
public:
	Fixed(/* args */);
	~Fixed();
	Fixed(const Fixed& other);
	void setRawBits(int const raw);
	int getRawBits(void) const;
	int getData() const
	{
		return data;
	}
	
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
};


int main()
{
	Fixed a(10);
	b = a;

	std::cout << "return vaule = " << getData() << std::endl;

}