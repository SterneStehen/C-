/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:22:50 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 14:33:46 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
private:
	std::string type;
public:
	Animal();
	Animal& operator=(const Animal& other);
	
	Animal(const Animal& other);
	virtual ~Animal();
	
	void setType(const std::string& nType);
	virtual std::string getType() const;
	
	virtual  void makeSound() const;
};

#endif