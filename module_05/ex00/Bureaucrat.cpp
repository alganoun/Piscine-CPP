/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 21:15:09 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/20 10:50:30 by allanganoun      ###   ########.fr       */
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
	if (this->grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::GradeIncrease()
{
	this->grade--;
	if (this->grade < 1)
		throw GradeTooHighException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.\n");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &tmp)
{
	out << tmp.getName() + " bureaucrat grade " << tmp.getGrade() << "." << std::endl;
}
