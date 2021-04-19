/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 02:24:45 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/16 16:12:02 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist()
:AWeapon("Power Fist", 8 , 50)
{
	//std::cout << "Power Fist constructor called." << std::endl;
}

PowerFist::PowerFist(PowerFist const &copied)
:AWeapon(copied)
{
	std::cout << "Power Fist copy constructor called." << std::endl;
}

PowerFist::~PowerFist()
{
	//std::cout << "Power Fist destructor called." << std::endl;
}

PowerFist	&PowerFist::operator=(PowerFist const &rhs)
{
	if (this == &rhs)
		return (*this);
	AWeapon::operator=(rhs);
	return (*this);
}

void PowerFist::attack() const
{
	std::cout <<  "* pschhh... SBAM! *" << std::endl;
}
