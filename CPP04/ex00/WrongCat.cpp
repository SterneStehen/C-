/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 04:52:46 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 15:27:03 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp" 

WrongCat::WrongCat()
{
	WrongAnimal::setType("Cat");
	std::cout << "craerted WrongCat class" << std::endl;
}


 WrongCat:: WrongCat(const  WrongCat& other) {
    std::cout << " WrongCat copied" << std::endl;
	*this = other;
}

 WrongCat&  WrongCat::operator=(const  WrongCat& other) {
    std::cout << " WrongCat assigned" << std::endl;
    if (this != &other) 
	{
        setType(other.getType());
    }
    return *this;
};



WrongCat::~WrongCat()
{
	std::cout << "destr WrongCat class" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat say Mau" << std::endl;
}
