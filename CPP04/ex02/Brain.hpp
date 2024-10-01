/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:58:58 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/01 14:05:15 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <cstring>

class Brain
{
private:
	
public:
	Brain(/* args */);
	~Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	std::string	ideas[100];
};
#endif
