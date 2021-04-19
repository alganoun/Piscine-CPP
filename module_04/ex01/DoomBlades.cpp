/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DoomBlades.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 03:18:21 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/19 12:39:06 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DoomBlades.hpp"

DoomBlades::DoomBlades()
:AWeapon("Doom Blades", 5 , 45)
{
	//std::cout << "Plasma Rifle constructor called." << std::endl;
}

DoomBlades::DoomBlades(DoomBlades const &copied)
:AWeapon(copied)
{
	std::cout << "Plasma rifle copy constructor called." << std::endl;
}

DoomBlades::~DoomBlades()
{
	//std::cout << "Plasma Rifle destructor called." << std::endl;
}

DoomBlades	&DoomBlades::operator=(DoomBlades const &rhs)
{
	if (this == &rhs)
		return (*this);
	AWeapon::operator=(rhs);
	return (*this);
}

void DoomBlades::attack() const
{
	std::cout <<  "* Shhhhling *" << std::endl;
}
