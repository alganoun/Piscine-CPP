/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:15:12 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/21 20:17:48 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern created" << std::endl;
}

Intern::Intern(Intern const &copied)
{
	*this = copied;
}

Intern::~Intern()
{
	std::cout << "Intern destroyed" << std::endl;
}

const char *Intern::FormNotCreated::what() const throw()
{
	return ("[INTERN] Form not Created");
}

Intern &Intern::operator=(Intern const &rhs)
{
	if (this == &rhs)
		return (*this);
	for (int i = 0 ; i < 6 ; i++)
		this->list[i] = rhs.list[i];
	return (*this);
}

Form *Intern::makeform(std::string to_compare, std::string target)
{
	typedef Form * (*flist) (std::string target);
	flist f_list[6];

	f_list[0] = createPresential;
	f_list[1] = createPresential;
	f_list[2] = createRobotomy;
	f_list[3] = createRobotomy;
	f_list[4] = createShrubbery;
	f_list[5] = createShrubbery;

	this->list[0] = "Presidential Pardon";
	this->list[1] = "PresidentialPardon";
	this->list[2] = "RobotomyRequest";
	this->list[3] = "Robotomy request";
	this->list[4] = "ShrubberyCreation";
	this->list[5] = "Shrubbery creation";

	for (int i = 0 ; i < 6 ; i++)
	{
		if (to_compare == this->list[i])
		{
			std::cout << this->list[i] + " Form created." << std::endl;
			return (f_list[i](target));
		}
	}
	throw FormNotCreated();
	return (NULL);
}

Form *createPresential(std::string target)
{
	return (new PresidentialPardonForm(target));
}
Form *createRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}
Form *createShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}
