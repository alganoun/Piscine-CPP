/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:24:32 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/15 16:30:32 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "John Doe";
	this->hp = 100;
	this->max_hp = 100;
	this->energy = 50;
	this->max_energy = 50;
	this->lvl = 1;
	this->melee = 20;
	this->ranged = 15;
	this->armor_red = 3;
	this->attack_name = "None";
	std::cout << "[SCAVTRAP] Default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hp = 100;
	this->max_hp = 100;
	this->energy = 50;
	this->max_energy = 50;
	this->lvl = 1;
	this->melee = 20;
	this->ranged = 15;
	this->armor_red = 3;
	this->attack_name = "None";
	std::cout << "[SCAVTRAP] " + this->name + " appears and is guarding the gate." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copied)
:name(copied.name)
{
	*this = copied;
	std::cout << "[SCAVTRAP] copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
	if (this->hp == 0)
		std::cout << "[SCAVTRAP] " + this->name + " is defeated the gate is no more guarded." << std::endl;
	else
		std::cout << "[SCAVTRAP] " + this->name + " vanishes and the door remains closed." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
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
	std::cout << "[SCAVTRAP] Assignation operator called." << std::endl;
	return (*this);
}

int		ScavTrap::getEnergy() const
{
	return (this->energy);
}

void	ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "[SCAVTRAP] <RANGED> " + this->name + " uses ranged attack on " + target +
		" causing " << this->ranged << " points of damages" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "[SCAVTRAP] <MELEE> " + this->name + " uses a melee attack on " + target +
		" causing " << this->melee<< " points of damages" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
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

void	ScavTrap::beRepaired(unsigned int amount)
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

void	ScavTrap::challengeNewcomer() const
{
	std::string	challenge_list[5] = {"Shi Fu Mi", "Chess", "Poker", "Monopoly", "Connect 4"};
	static int random = 0;
	srand (time(0) + random++);
	int i = rand() % 5;
	std::cout << "[CHALLENGE] Hello fellow traveler I challenge you in a " + challenge_list[i] + " game." << std::endl;
}

void	ScavTrap::display_stats() const
{
	std::cout << this->name + " Stats :" << std::endl;
	std::cout << "Level : " << this->lvl << std::endl;
	std::cout << "HP : " << this->hp << std::string(" / ") << this->max_hp << std::endl;
	std::cout << "Energy : " << this->energy << std::string(" / ") << this->max_energy << std::endl;
	std::cout << "Melee attack damages : " << this->melee << std::endl;
	std::cout << "Ranged attack damages : " << this->ranged << std::endl;
}
