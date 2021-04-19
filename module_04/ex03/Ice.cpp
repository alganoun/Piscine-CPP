/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:09:13 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/18 18:05:15 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice()
:AMateria("ice")
{
	//std::cout << "Ice constructor called." << std::endl;
}

Ice::Ice(Ice const &copied)
:AMateria(copied)
{
	//std::cout << "Ice copy constructor called." << std::endl;
}

Ice::~Ice()
{
	//std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &rhs)
{
	if (this == &rhs)
		return (*this);
	AMateria::operator=(rhs);
	//std::cout << "Ice assignation operator called." << std::endl;
	return (*this);
}

AMateria *Ice::clone() const
{
	AMateria *copy = new Ice(*this);
	return (copy);
}

void	Ice::use(ICharacter &target)
{
	this->_xp += 10;
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}

