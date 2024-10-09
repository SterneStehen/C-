/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 04:21:39 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 06:20:39 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
private:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& other);
	~WrongAnimal();
	
	void setType(const std::string& nType);
	std::string getType() const;
	
	void makeSound() const;
};

#endif 