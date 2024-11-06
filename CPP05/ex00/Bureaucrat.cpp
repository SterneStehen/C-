/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:39:13 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/05 19:39:13 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : m_name("Default"), m_grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : m_name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    m_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : m_name(src.m_name), m_grade(src.m_grade)
{
    if (m_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (m_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    if (this != &obj)
    {
        if (obj.m_grade < 1)
            throw Bureaucrat::GradeTooHighException();
        if (obj.m_grade > 150)
            throw Bureaucrat::GradeTooLowException();

        this->m_grade = obj.m_grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& obj)
{
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return o;
}

const std::string& Bureaucrat::getName() const
{
    return m_name;
}

int Bureaucrat::getGrade() const
{
    return m_grade;
}

void Bureaucrat::HiGrade()
{
    if (m_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    --m_grade;
}

void Bureaucrat::LowGrade()
{
    if (m_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    ++m_grade;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}
