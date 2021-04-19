/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 22:11:52 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/16 16:11:02 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
:AWeapon("Plasma Rifle", 5 , 21)
{
	//std::cout << "Plasma Rifle constructor called." << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copied)
:AWeapon(copied)
{
	std::cout << "Plasma rifle copy constructor called." << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
	//std::cout << "Plasma Rifle destructor called." << std::endl;
}

PlasmaRifle	&PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
	if (this == &rhs)
		return (*this);
	AWeapon::operator=(rhs);
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout <<  "* piouuu piouuu piouuu *" << std::endl;
}


