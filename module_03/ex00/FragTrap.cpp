/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:29:31 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/15 15:41:01 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
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
{
	this->name = name;
	this->hp = 100;
	this->max_hp = 100;
	this->energy = 100;
	this->max_energy = 100;
	this->lvl = 1;
	this->melee = 30;
	this->ranged = 20;
	this->armor_red = 5;
	this->attack_name = "None";
	std::cout << "[FRGATRAP] " + this->name + " appears." << std::endl;
}

FragTrap::FragTrap(FragTrap const &copied)
:name(copied.name)
{
	*this = copied;
	std::cout << "[FRAGTRAP] copy constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
	if (this->hp == 0)
		std::cout << this->name + "'s corpse vanishes..." << std::endl;
	else
		std::cout << this->name + " vanishes..." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
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
	std::cout << "[FRGATRAP] Assignation operator called." << std::endl;
	return (*this);
}

int		FragTrap::getEnergy() const
{
	return (this->energy);
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "[RANGED] " + this->name + " uses " +
		this->attack_name + " on " + target +
		" causing " << this->ranged << " points of damages" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "[MELEE] " + this->name + " uses " +
		this->attack_name + " on " + target +
		" causing " << this->melee<< " points of damages" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
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

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	attack_list[6] = {"Normal attack", "Medium attack", "Heavy attack", "Normal ranged attack", "Medium ranged", "Heavy ranged attack"};
	if (this->energy > 0)
		this->energy -= 25;
	static int random = 0;
	srand (time(0) + random++);
	int i = rand() % 6;
	if (this->energy != 0 && this->hp != 0)
	{
		this->attack_name = attack_list[i];
		if (i < 5)
			this->meleeAttack(target);
		else
			this->rangedAttack(target);
	}
	else if (this->energy == 0)
		std::cout << this->name + " cant attack without energy." << std::endl;
	else if (this->hp == 0)
		std::cout << this->name + " is dead, he can't attack anymore." << std::endl;
}

void	FragTrap::display_stats() const
{
	std::cout << this->name + " Stats :" << std::endl;
	std::cout << "Level : " << this->lvl << std::endl;
	std::cout << "HP : " << this->hp << std::string(" / ") << this->max_hp << std::endl;
	std::cout << "Energy : " << this->energy << std::string(" / ") << this->max_energy << std::endl;
	std::cout << "Melee attack damages : " << this->melee << std::endl;
	std::cout << "Ranged attack damages : " << this->ranged << std::endl;
}
