/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:55:27 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/13 00:34:53 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "AForm.hpp"
#include "Bureaucrat.hpp"
 
AForm::AForm(std::string name, int signGrade, int execGrade)
    : m_name(name), m_isSigned(false), m_signGrade(signGrade), m_execGrade(execGrade) {
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}

AForm::~AForm() {}

const std::string &AForm::getName() const {
    return m_name;
}

bool AForm::isSigned() const {
    return m_isSigned;
}

int AForm::getSignGrade() const {
    return m_signGrade;
}

int AForm::getExecGrade() const {
    return m_execGrade;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > m_signGrade)
        throw GradeTooLowException();
    m_isSigned = true;
}

std::ostream &operator<<(std::ostream &out, const AForm &form) {
    out << "Form " << form.getName() << ", signed: " << form.isSigned()
        << ", grade required to sign: " << form.getSignGrade()
        << ", grade required to execute: " << form.getExecGrade();
    return out;
}
