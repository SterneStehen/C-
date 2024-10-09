/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:06:53 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 14:47:10 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){std::cout << "Brain constructor" << std::endl;};
Brain::~Brain(){std::cout << "Brain destructor" << std::endl;};

Brain::Brain(const Brain &other)
{
	std::cout << "brain copied" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain: Assignment operator" << std::endl;
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = other.ideas[i];
	}
	return (*this);
}
