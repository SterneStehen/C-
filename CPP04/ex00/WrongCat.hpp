/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 04:32:23 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 15:27:40 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:
	//std::string type;
public:
	WrongCat();
	WrongCat(const WrongCat& other);
    WrongCat& operator=(const WrongCat& other);
	~WrongCat();

	//std::string getType() const;
	void makeSound() const;
};

#endif 