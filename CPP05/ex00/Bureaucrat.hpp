/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:38:59 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/05 14:38:59 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
private:
    const std::string m_name;
    int m_grade;

public:
    Bureaucrat();
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& src);
    Bureaucrat& operator=(const Bureaucrat& obj);
    ~Bureaucrat();


    class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char *what() const throw();
    };

    const std::string& getName() const;
    int getGrade() const;

    void HiGrade();
    void LowGrade();
};


std::ostream& operator<<(std::ostream& o, const Bureaucrat& obj);

#endif
