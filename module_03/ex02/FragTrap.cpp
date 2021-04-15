/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:29:31 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/15 16:14:06 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
:ClapTrap()
{
	this->name = "John Doe";
	this->hp = 100;
	this->max_hp = 100;
	this->energy = 100;
	this->max_energy = 100;
	this->lvl = 1;
	this->melee = 30;
	this->ranged = 20;
	this->armor_red = 5;
	this->attack_name = "None";
	std::cout << "[FRAGTRAP] Default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name)
:ClapTrap(name)
{

	this->hp = 100;
	this->max_hp = 100;
	this->energy = 100;
	this->max_energy = 100;
	this->lvl = 1;
	this->melee = 30;
	this->ranged = 20;
	this->armor_red = 5;
	this->attack_name = "None";
	std::cout << "[FRAGTRAP] " + this->name + " appears." << std::endl;
}

FragTrap::FragTrap(FragTrap const &copied)
:ClapTrap(copied)
{
	std::cout << "[FRAGTRAP] copy constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
	if (this->hp == 0)
		std::cout << "[FRAGTRAP] " +  this->name + "'s corpse vanishes..." << std::endl;
	else
		std::cout << "[FRAGTRAP] " +  this->name + " vanishes..." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	if (this == &rhs)
		return (*this);
	ClapTrap::operator=(rhs);
	std::cout << "[FRAGTRAP] Assignation operator called." << std::endl;
	return (*this);
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	attack_list[6] = {"Normal attack", "Medium attack", "Heavy attack", "Normal ranged attack", "Medium ranged", "Heavy ranged attack"};
	static int random = 0;
	srand (time(0) + random++);
	int i = rand() % 6;
	if (this->energy > 0 && this->hp != 0)
	{
		this->attack_name = attack_list[i];
		if (i < 5)
			this->meleeAttack(target);
		else
			this->rangedAttack(target);
		this->energy -= 25;
	}
	else if (this->energy == 0)
		std::cout << this->name + " cant attack without energy." << std::endl;
	else if (this->hp == 0)
		std::cout << this->name + " is dead, he can't attack anymore." << std::endl;
}
