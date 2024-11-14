/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makeForm.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 04:33:46 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/14 04:42:53 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Intern.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(const Intern& src) {
	
    (void)src;
}

Intern& Intern::operator=(const Intern& obj) 
{
	
    (void)obj;
    return *this;
}

Intern::~Intern() {}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const {
    std::string forms[3] = {"shrubery creation", "robotomy requet", "presidential pardon"};
    
    AForm* (*constructors[])(const std::string&) = {
        [](const std::string& t) -> AForm* { return new ShrubberyCreationForm(t); },
        [](const std::string& t) -> AForm* { return new RobotomyRequestForm(t); },
        [](const std::string& t) -> AForm* { return new PresidentialPardonForm(t); }
    };

    for (int i = 0; i < 3; ++i) {
        if (forms[i] == formName) {
            std::cout << "Intern run " << forms[i] << std::endl;
            return constructors[i](target);
        }
    }

    std::cout << "Uknown form type: " << formName << std::endl;
    return nullptr;
}
