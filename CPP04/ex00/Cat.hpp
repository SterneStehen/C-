/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:36:05 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 15:08:51 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
private:
	//std::string type;
public:
	Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();

	//std::string getType() const;
	void makeSound() const;
};

#endif