/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:24:32 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/15 16:32:58 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
:ClapTrap()
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
:ClapTrap(name)
{
	this->hp = 100;
	this->max_hp = 100;
	this->energy = 50;
	this->max_energy = 50;
	this->lvl = 1;
	this->melee = 20;
	this->ranged = 15;
	this->armor_red = 3;
	this->attack_name = "None";
	std::cout << "[SCAVTRAP] " + this->name + " appears." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copied)
:ClapTrap(copied)
{
	std::cout << "[SCAVTRAP] Copy constructor called." << std::endl;
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
	ClapTrap::operator=(rhs);
	std::cout << "[SCAVTRAP] Assignation operator called." << std::endl;
	return (*this);
}

void	ScavTrap::challengeNewcomer()
{
	std::string	challenge_list[5] = {"Shi Fu Mi", "Chess", "Poker", "Monopoly", "Connect 4"};
	static int random = 0;
	srand (time(0) + random++);
	int i = rand() % 5;
	std::cout << "[CHALLENGE] Hello fellow traveler I challenge you in a " + challenge_list[i] + " game." << std::endl;
}
