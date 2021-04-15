/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:46:48 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/15 16:57:51 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
:ClapTrap()
{
	this->hp = 60;
	this->max_hp = 60;
	this->energy = 120;
	this->energy = 120;
	this->lvl = 1;
	this->melee = 60;
	this->ranged = 5;
	this->armor_red = 0;
	this->attack_name = "None";
	std::cout << "[NINJATRAP] Default constructor called." << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
:ClapTrap(name)
{
	this->hp = 60;
	this->max_hp = 60;
	this->energy = 120;
	this->max_energy = 120;
	this->lvl = 1;
	this->melee = 60;
	this->ranged = 5;
	this->armor_red = 0;
	this->attack_name = "None";
	std::cout << "[NINJATRAP] " + this->name + " the Ninja appears." << std::endl;
}


NinjaTrap::NinjaTrap(NinjaTrap const &copied)
:ClapTrap(copied)
{
	std::cout << "[NINJATRAP] Copy constructor called" << std::endl;
	*this = copied;
}


NinjaTrap::~NinjaTrap()
{
	if (this->hp == 0)
		std::cout << "[NINJATRAP] " + this->name + "'s corpse vanishes..." << std::endl;
	else
		std::cout << "[NINJATRAP] " + this->name + " vanishes..." << std::endl;
}


NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs)
{
	if (this == &rhs)
		return (*this);
	ClapTrap::operator=(rhs);
	std::cout << "[NINJATRAP] Assignation operator called." << std::endl;
	return (*this);
}

void		NinjaTrap::ninjaShoebox(FragTrap &FragTrap)
{
	std::string	attack_list[6] = {"Ninja Normal attack",
								"Ninja Medium attack",
								"Ninja Heavy attack",
								"Ninja Normal ranged attack",
								"Ninja Medium ranged",
								"Ninja Heavy ranged attack"};
	static int random = 0;
	srand (time(0) + random++);
	int i = rand() % 6;
	if (this->energy > 0 && this->hp != 0)
	{
		this->attack_name = attack_list[i];
		if (i < 5)
		{
			std::cout << "[N -> F]>>";
			this->meleeAttack(FragTrap.getName());
			FragTrap.takeDamage(this->melee);
		}
		else
		{
			std::cout << "[N -> F]>>";
			this->rangedAttack(FragTrap.getName());
			FragTrap.takeDamage(this->ranged);
		}
		this->energy -= 25;
		if (this->energy < 0)
			this->energy = 0;
	}
	else if (this->energy < 25)
		std::cout << this->name + " cant attack without energy." << std::endl;
	else if (this->hp == 0)
		std::cout << this->name + " is dead, he can't attack anymore." << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap &ScavTrap)
{
	std::string	attack_list[6] = {"Ninja Normal attack",
								"Ninja Medium attack",
								"Ninja Heavy attack",
								"Ninja Normal ranged attack",
								"Ninja Medium ranged",
								"Ninja Heavy ranged attack"};
	static int random = 0;
	srand (time(0) + random++);
	int i = rand() % 6;
	if (this->energy > 0 && this->hp != 0)
	{
		this->attack_name = attack_list[i];
		if (i < 5)
		{
			std::cout << "[N -> S]>>";
			this->meleeAttack(ScavTrap.getName());
			ScavTrap.takeDamage(this->melee);
		}
		else
		{
			std::cout << "[N -> S]>>";
			this->rangedAttack(ScavTrap.getName());
			ScavTrap.takeDamage(this->ranged);
		}
		this->energy -= 25;
		if (this->energy < 0)
			this->energy = 0;
	}
	else if (this->energy < 25)
		std::cout << this->name + " cant attack without energy." << std::endl;
	else if (this->hp == 0)
		std::cout << this->name + " is dead, he can't attack anymore." << std::endl;
}

void		NinjaTrap::ninjaShoebox(ClapTrap &ClapTrap)
{
	std::string	attack_list[6] = {"Ninja Normal attack",
								"Ninja Medium attack",
								"Ninja Heavy attack",
								"Ninja Normal ranged attack",
								"Ninja Medium ranged",
								"Ninja Heavy ranged attack"};
	static int random = 0;
	srand (time(0) + random++);
	int i = rand() % 6;
	if (this->energy > 0 && this->hp != 0)
	{
		this->attack_name = attack_list[i];
		if (i < 5)
		{
			std::cout << "[N -> C]>>";
			this->meleeAttack(ClapTrap.getName());
			ClapTrap.takeDamage(this->melee);
		}
		else
		{
			std::cout << "[N -> C]>>";
			this->rangedAttack(ClapTrap.getName());
			ClapTrap.takeDamage(this->ranged);
		}
		this->energy -= 25;
		if (this->energy < 0)
			this->energy = 0;
	}
	else if (this->energy < 25)
		std::cout << this->name + " cant attack without energy." << std::endl;
	else if (this->hp == 0)
		std::cout << this->name + " is dead, he can't attack anymore." << std::endl;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &NinjaTrap)
{
	std::string	attack_list[6] = {"Ninja Normal attack",
								"Ninja Medium attack",
								"Ninja Heavy attack",
								"Ninja Normal ranged attack",
								"Ninja Medium ranged",
								"Ninja Heavy ranged attack"};
	static int random = 0;
	srand (time(0) + random++);
	int i = rand() % 6;
	if (this->energy > 0 && this->hp != 0)
	{
		this->attack_name = attack_list[i];
		if (i < 5)
		{
			std::cout << "[N -> N]>>";
			this->meleeAttack(NinjaTrap.getName());
			FragTrap.takeDamage(this->melee);
		}
		else
		{
			std::cout << "[N -> N]>>";
			this->rangedAttack(NinjaTrap.getName());
			NinjaTrap.takeDamage(this->ranged);
		}
		this->energy -= 25;
		if (this->energy < 0)
			this->energy = 0;
	}
	else if (this->energy < 25)
		std::cout << this->name + " cant attack without energy." << std::endl;
	else if (this->hp == 0)
		std::cout << this->name + " is dead, he can't attack anymore." << std::endl;
}
