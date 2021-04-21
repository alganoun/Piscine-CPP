/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 21:15:09 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/21 20:37:44 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade)
:name(name), grade(grade)
{
	std::cout << "Bureaucrat constructor called." << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copied)
{
	*this = copied;
	std::cout << "Bureaucrat copy constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->grade = rhs.grade;
	return (*this);
}

std::string const &Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::GradeDecrease()
{
	this->grade++;
	std::cout << "Decreasing the Bureaucrat's grade..." << std::endl;
	if (this->grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::GradeIncrease()
{
	this->grade--;
	std::cout << "Increasing the Bureaucrat's grade..." << std::endl;
	if (this->grade < 1)
		throw GradeTooHighException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("[BUREAUCRAT] Grade is too high.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("[BUREAUCRAT] Grade is too low.");
}

const char *Bureaucrat::FormNotSigned::what() const throw()
{
	return ("[BUREAUCRAT] Form need to be signed to be executed.");
}

void	Bureaucrat::signForm(Form &f) const
{
	if (f.getSigned() == false)
	{
		f.beSigned(*this);
		std::cout << this->name + " is signing the " + f.getName() + " form." << std::endl;
	}
	else
		std::cout << "The form is already signed" << std::endl;

}

void	Bureaucrat::executeForm(Form const &form) const
{
	try
	{
		if (form.getSigned() == true)
		{
			std::cout << this->name + " executes the form..." << std::endl;
			form.execute(*this);
		}
		else
		{
			std::cout << "The " + form.getName() + " needs to be signed to be executed." << std::endl;
			throw FormNotSigned();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &tmp)
{
	out << tmp.getName() + " bureaucrat grade " << tmp.getGrade() << ".";
	return (out);
}

