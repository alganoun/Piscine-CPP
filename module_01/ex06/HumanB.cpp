/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 18:55:33 by allanganoun       #+#    #+#             */
/*   Updated: 2021/03/28 20:18:14 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
:name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

std::string	HumanB::getName()
{
	return (this->name);
}

Weapon	*HumanB::getWeapon()
{
	return (this->weapon);
}

void	HumanB::setName(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << this->name + " attacks with his " + this->weapon->getType() << std::endl;
}
