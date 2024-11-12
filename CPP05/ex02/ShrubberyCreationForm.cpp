/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:34:56 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/13 00:34:13 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ShrubberyCreationForm.hpp"
#include <fstream>
 
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShrubberyCreationForm", 145, 137), m_target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if (!isSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > getExecGrade())
        throw GradeTooLowException();

    std::ofstream file(m_target + "_shrubbery");
    if (file.is_open()) {
        file << "ASCII Tree\n";
        file.close();
    }
}
