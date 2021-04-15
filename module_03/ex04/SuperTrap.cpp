/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:07:28 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/14 14:09:21 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
:ClapTrap(), FragTrap(), NinjaTrap()
{
	this->attack_name = "None";
	std::cout << "[SUPERTRAP] Default constructor called." << std::endl;
}

SuperTrap::SuperTrap(std::string name)
:ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	this->attack_name = "None";
	this->hp = 100;
	this->max_hp = 100;
	this->energy = 120;
	this->max_energy = 120;
	this->melee = 30;
	this->ranged = 5;
	this->armor_red = 5;
	std::cout << "[SUPERTRAP] " +this->name + " appears." << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap & copied)
:ClapTrap(copied), FragTrap(copied) , NinjaTrap(copied)
{
	std::cout << "[SUPERTRAP] Copy constructor called" << std::endl;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &rhs)
{
	if (this == &rhs)
		return (*this);
	ClapTrap::operator=(rhs);
	std::cout << "[SUPERTRAP] Assignation operator called." << std::endl;
	return (*this);
}

SuperTrap::~SuperTrap()
{
	if (this->hp == 0)
		std::cout << "[SUPERTRAP] " + this->name + "'s corpse vanishes..." << std::endl;
	else
		std::cout << "[SUPERTRAP] " + this->name + " vanishes..." << std::endl;
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::rangedAttack(target);
}

std::ostream	&operator<<(std::ostream &out, SuperTrap const & temp)
{
	out << temp.getEnergy();
	return out;
}
