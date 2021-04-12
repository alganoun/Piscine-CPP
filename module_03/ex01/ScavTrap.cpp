/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:24:32 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/12 11:59:20 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
:hp(100), max_hp(100), energy(100), max_energy(100), lvl(1), melee(30), ranged(20), armor_red(5)
{
	this->name = "John Doe";
	this->attack_name = "None";
}

ScavTrap::ScavTrap(std::string name)
:hp(100), max_hp(100), energy(100), max_energy(100), lvl(1), melee(30), ranged(20), armor_red(5)
{
	this->name = name;
	this->attack_name = "None";
	std::cout << "Hello I'm " + this->name + "and you shall not pass." << std::endl;
}

ScavTrap::~ScavTrap()
{
	if (this->hp == 0)
		std::cout << this->name + "is defeated the gate is no more guarded." << std::endl;
	else
		std::cout << this->name + " vanishes and the door remains closed." << std::endl;
}

int		ScavTrap::getEnergy()
{
	return (this->energy);
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "[RANGED] " + this->name + " uses ranged attack on " + target +
		" causing " << this->ranged << " points of damages" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "[MELEE] " + this->name + " uses a melee attack on " + target +
		" causing " << this->melee<< " points of damages" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	this->hp -= (amount - this->armor_red);
	if (this->hp < 0)
		this->hp = 0;
	std::cout << this->name + " HPs are now " << this->hp << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
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

void	ScavTrap::challengeNewcomer()
{
	std::string	challenge_list[5] = {"Shi Fu Mi", "Chess", "Poker", "Monopoly", "Connect 4"};
	static int random = 0;
	srand (time(0) + random++);
	int i = rand() % 5;
	std::cout << "Hello fellow traveler I challenge you in a " + challenge_list[i] + " game." << std::endl;
}
