/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:59:41 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/17 02:22:59 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damages)
:name(name), apcost(apcost), damages(damages)
{
	//std::cout << "Default weapon constructor called" << std::endl;
}

AWeapon::AWeapon(AWeapon const &copied)
{
	*this = copied;
	//std::cout << "Default weapon copy constructor called" << std::endl;
}

AWeapon::~AWeapon()
{
	//std::cout << "Default weapon destructor called." << std::endl;
}

AWeapon &AWeapon::operator=(AWeapon const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->name = rhs.name;
	this->apcost = rhs.apcost;
	this->damages = rhs.damages;
	std::cout << "Default weapon assignation operator called." << std::endl;
	return (*this);
}

std::string const &AWeapon::getName() const
{
	return (this->name);
}

int AWeapon::getAPCost() const
{
	return (this->apcost);
}

int	AWeapon::getDamage() const
{
	return (this->damages);
}
