/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:29:31 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/12 19:36:50 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "John Doe";
	this->attack_name = "None";
	std::cout << "[FRAGTRAP] : " + this->name + " appears." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->attack_name = "None";
	std::cout << "[FRAGTRAP] : " + this->name + " appears." << std::endl;
}

FragTrap::FragTrap(const FragTrap & copied)
{
	std::cout << "[FRAGTRAP] : Copy constructor called" << std::endl;
	*this = copied;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "Operator assignation called." << std::endl;
	this->energy = rhs.getEnergy();
	return (*this);
}

FragTrap::~FragTrap()
{
	if (this->hp == 0)
		std::cout << "[FRAGTRAP] : " + this->name + "'s corpse vanishes..." << std::endl;
	else
		std::cout << "[FRAGTRAP] :" + this->name + " vanishes..." << std::endl;
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

std::ostream	&operator<<(std::ostream &out, FragTrap const & temp)
{
	out << temp.getEnergy();
	return out;
}
