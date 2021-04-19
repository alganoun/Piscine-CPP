/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 13:00:16 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/18 18:04:13 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(std::string const &type)
:_type(type), _xp(0)
{
	//std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &copied)
{
	*this = copied;
	//std::cout << "AMateria copy constructor called." << std::endl;
}

AMateria::~AMateria()
{
	//std::cout << "AMateria destructor called." << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	this->_xp = rhs._xp;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

unsigned int	AMateria::getXP() const
{
	return (this->_xp);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
