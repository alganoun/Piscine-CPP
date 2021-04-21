/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:13:57 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/21 15:51:25 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <cstdlib>

class Form;
# include "Form.hpp"

class Bureaucrat
{
private:
	std::string const name;
	int grade;
	Bureaucrat();
public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &copied);
	virtual ~Bureaucrat();

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

	Bureaucrat &operator=(Bureaucrat const &rhs);

	std::string const &getName() const;
	int	getGrade() const;

	void	GradeIncrease();
	void	GradeDecrease();
	void	signForm(Form &f) const;
	void	executeForm(Form const &form) const;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &tmp);

#endif
