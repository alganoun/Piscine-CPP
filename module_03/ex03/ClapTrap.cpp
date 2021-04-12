/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:12:48 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/12 19:36:52 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
:hp(100), max_hp(100), energy(100), max_energy(100), lvl(1), melee(30), ranged(20), armor_red(5)
{
	this->name = "John Doe";
	this->attack_name = "None";
	std::cout << "ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
:hp(100), max_hp(100), energy(100), max_energy(100), lvl(1), melee(30), ranged(20), armor_red(5)
{
	this->name = name;
	this->attack_name = "None";
	std::cout << this->name + " appears." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & copied)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copied;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Operator assignation called." << std::endl;
	this->energy = rhs.getEnergy();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	if (this->hp == 0)
		std::cout << this->name + "'s corpse vanishes..." << std::endl;
	else
		std::cout << this->name + " vanishes..." << std::endl;
}

int		ClapTrap::getEnergy() const
{
	return (this->energy);
}

void	ClapTrap::display_stats()
{
	std::cout << this->name + "Stats :" << std::endl;
	std::cout << "Level : " << this->lvl << std::endl;
	std::cout << "HP : " << this->hp << std::string(" / ") << this->max_hp << std::endl;
	std::cout << "Energy : " << this->energy << std::string(" / ") << this->max_energy << std::endl;
	std::cout << "Melee attack damages : " << this->melee << std::endl;
	std::cout << "Ranged attack damages : " << this->ranged << std::endl;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "[RANGED] " + this->name + " uses " +
		this->attack_name + " on " + target +
		" causing " << this->ranged << " points of damages" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "[MELEE] " + this->name + " uses " +
		this->attack_name + " on " + target +
		" causing " << this->melee<< " points of damages" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hp -= (amount - this->armor_red);
	if (this->hp < 0)
		this->hp = 0;
	std::cout << this->name + " HPs are now " << this->hp << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hp == 0)
		std::cout << this->name + " is already dead, he can't be healed." << std::endl;
	else
	{
		this->hp += amount;
		if (this->hp > this->max_hp)
			this->hp = this->max_hp;
		std::cout << this->name + " healed "<< amount << " and is now " << this->hp << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &out, ClapTrap const & temp)
{
	out << temp.getEnergy();
	return out;
}
