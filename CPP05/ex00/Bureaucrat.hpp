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

#include <iostream>

class Bureaucrat
{
private:
	const std::string m_name;
	int m_grade;
public:
	Bureaucrat(std::string& name, int grade);
	~Bureaucrat();

	class GradeTooHighException : public std::exeption{
		public:
			const char *what() const throw;
	}
	class GradeTooLowException : public std::exeption{
		public:
			const char *what() const throw;
	}

	const std::string getName() const;
	int getGrade() const;

	void HiGrade();
	void LowGrade();
};
