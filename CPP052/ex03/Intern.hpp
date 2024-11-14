/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 04:29:40 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/14 04:29:41 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/




#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>

class Intern {
public:
    Intern();
    Intern(const Intern& src);
    Intern& operator=(const Intern& obj);
    ~Intern();

    AForm* makeForm(const std::string& formName, const std::string& target) const;
};

#endif
