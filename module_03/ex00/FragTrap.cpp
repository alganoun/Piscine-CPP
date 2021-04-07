/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:29:31 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/07 16:35:47 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
:hp(100), max_hp(100), energy(100), lvl(1), melee(30), ranged(20), armor_red(5), current(0)
{
	this->name = "John Doe";
	this->attack_name = "None";
}

FragTrap::FragTrap(std::string name)
:hp(100), max_hp(100), energy(100), lvl(1), melee(30), ranged(20), armor_red(5), current(0)
{
	this->name = name;
	this->attack_name = "None";
	std::cout << this->name + " appears." << std::endl;
}

FragTrap::~FragTrap()
{
	if (this->hp == 0)
		std::cout << this->name + "'s corpse vanishes..." << std::endl;
	else
		std::cout << this->name + " vanishes..." << std::endl;
}

int		FragTrap::getCurrent()
{
	return (this->current);
}

int		FragTrap::getHp()
{
	return (this->hp);
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "[RANGED] " + this->name + " uses " +
		this->attack_name + " on " + target +
		" causing " << this->current << " points of damages" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "[MELEE] " + this->name + " uses " +
		this->attack_name + " on " + target +
		" causing " << this->current << " points of damages" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->hp -= (amount - this->armor_red);
	if (this->hp < 0)
		this->hp = 0;
	std::cout << this->name + " is now " << this->hp << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (hp == 0)
		std::cout << this->name + " is already dead, he can't be healed." << std::endl;
	else
	{
		this->hp += amount;
		if (this->hp > 100)
			this->hp = 100;
		std::cout << this->name + " healed "<< amount << " and is now " << this->hp << std::endl;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int amount;
	int i;

	std::string	attack_list[6] = {"Normal attack", "Medium attack", "Heavy attack", "Normal ranged attack", "Medium ranged", "Heavy ranged attack"};
	int damage_tab[6] = {0, 10, 20, 0, 10, 20};

	this->energy -= 25;
	srand (time(0));
	i = rand() % 6;
	if (this->energy != 0)
	{
		this->attack_name = attack_list[i];
		if (i < 5)
		{
			this->current = this->melee + damage_tab[i];
			this->meleeAttack(target);
		}
		else
		{
			this->current = this->ranged + damage_tab[i];
			this->rangedAttack(target);
		}
	}
	else
		std::cout << this->name + " cant attack without energy." << std::endl;
}

