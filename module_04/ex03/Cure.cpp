/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:46:45 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/18 18:05:00 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure()
:AMateria("cure")
{
	//std::cout << "Cure constructor called." << std::endl;
}

Cure::Cure(Cure const &copied)
:AMateria(copied)
{
	//std::cout << "Cure copy constructor called." << std::endl;
}

Cure::~Cure()
{
	//std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &rhs)
{
	if (this == &rhs)
		return (*this);
	AMateria::operator=(rhs);
	//std::cout << "Cure assignation operator called." << std::endl;
	return (*this);
}

AMateria *Cure::clone() const
{
	AMateria *copy = new Cure(*this);
	return (copy);
}

void	Cure::use(ICharacter &target)
{
	this->_xp += 10;
	std::cout << "* Heals " + target.getName() + "'s wounds *" << std::endl;
}
