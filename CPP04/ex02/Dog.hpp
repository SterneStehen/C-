/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:29:43 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 05:13:30 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
private:
	Brain* brain;
public:
	Dog();
	~Dog();

	
	//std::string getType() const;
	void makeSound() const;
	
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
};

#endif