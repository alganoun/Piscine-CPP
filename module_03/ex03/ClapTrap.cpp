/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:12:48 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/15 15:58:48 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
:name("John Doe")
{
	this->lvl = 1;
	this->attack_name = "None";
	std::cout << "[CLAPTRAP] Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
:name(name)
{
	this->lvl = 1;
	this->attack_name = "None";
	std::cout << "[CLAPTRAP] " + this->name + " appears." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copied)
:name(copied.name)
{
	*this = copied;
	std::cout << "[CLAPTRAP] copy constructor called." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[CLAPTRAP] Destructor called." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->name = rhs.name;
	this->hp = rhs.hp;
	this->max_hp = rhs.max_hp;
	this->energy = rhs.energy;
	this->max_energy = rhs.max_energy;
	this->lvl = rhs.lvl;
	this->melee = rhs.melee;
	this->ranged = rhs.ranged;
	this->armor_red = rhs.armor_red;
	this->attack_name = rhs.attack_name;
	std::cout << "[CLAPTRAP] Assignation operator called." << std::endl;
	return (*this);
}

std::string	ClapTrap::getName() const
{
	return(this->name);
}

int		ClapTrap::getEnergy() const
{
	return (this->energy);
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "[RANGED] " + this->name + " uses ranged attack on " + target +
		" causing " << this->ranged << " points of damages" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "[MELEE] " + this->name + " uses a melee attack on " + target +
		" causing " << this->melee<< " points of damages" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int amount2 = (int)amount;
	if (this->hp > 0 && amount2 > 0)
	{
		this->hp -= (amount2 - this->armor_red);
		if (this->hp < 0)
			this->hp = 0;
		std::cout << this->name + " took a " << amount2 << " damages hit, his HPs are now " << this->hp << std::endl;
	}
	else if (this->hp == 0)
		std::cout << this->name+ " is dead he can't take more damages." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	int amount2 = (int)amount;
	if (hp == 0)
		std::cout << this->name + " is already dead, he can't be healed." << std::endl;
	else if (amount2 > 0)
	{
		this->hp += amount2;
		if (this->hp > 100)
			this->hp = 100;
		std::cout << this->name + " healed "<< amount2 << " and is now " << this->hp << std::endl;
	}
}

void	ClapTrap::display_stats() const
{
	std::cout << this->name + " Stats :" << std::endl;
	std::cout << "Level : " << this->lvl << std::endl;
	std::cout << "HP : " << this->hp << std::string(" / ") << this->max_hp << std::endl;
	std::cout << "Energy : " << this->energy << std::string(" / ") << this->max_energy << std::endl;
	std::cout << "Melee attack damages : " << this->melee << std::endl;
	std::cout << "Ranged attack damages : " << this->ranged << std::endl;
}
