/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:56:03 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/21 09:24:04 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	Form("Roboto my request", 72, 45), target(target)
{
	std::cout << "Roboto my request form constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copied):
	Form(copied), target(copied.target)
{
	std::cout << "Roboto my request form copy constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Roboto my request form destructor called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->target = rhs.target;
	return (*this);
}


void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "* VRRRRR BZZZZZZ VRRRRRR *" << std::endl;
	std::string list[2] = {" has been robotomized successfully", " robotomization failed."};
	srand(time(NULL));
	int i = rand() % 2;
		std::cout << this->target << list[i] << std::endl;
}
