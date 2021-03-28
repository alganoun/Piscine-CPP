/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 18:42:02 by allanganoun       #+#    #+#             */
/*   Updated: 2021/03/28 19:50:30 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
:name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

std::string	HumanA::getName()
{
	return (this->name);
}

Weapon	HumanA::getWeapon()
{
	return (this->weapon);
}

void	HumanA::setName(std::string name)
{
	this->name = name;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}

void	HumanA::attack()
{
	std::cout << this->name + " attacks with his " + this->weapon.getType() << std::endl;
}

