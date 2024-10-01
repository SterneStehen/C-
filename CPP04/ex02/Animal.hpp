/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:14:26 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/01 14:37:43 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal
{
private:
	std::string type;
public:
	AAnimal();
	virtual ~AAnimal();
	
	void setType(const std::string& nType);
	virtual std::string getType() const;
	
	AAnimal& operator=(const AAnimal& other);
	AAnimal(const AAnimal& other);
	virtual void makeSound() const = 0;
};

#endif