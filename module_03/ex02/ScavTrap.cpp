/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:24:32 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/12 19:35:59 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "John Doe";
	this->attack_name = "None";
	std::cout << "[SCAVTRAP] : " + this->name + " appears." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->attack_name = "None";
	std::cout << "[SCAVTRAP] : " + this->name + " appears." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & copied)
{
	std::cout << "[SCAVTRAP] : Copy constructor called" << std::endl;
	*this = copied;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "Operator assignation called." << std::endl;
	this->energy = rhs.getEnergy();
	return (*this);
}



ScavTrap::~ScavTrap()
{
	if (this->hp == 0)
		std::cout << "[SCAVTRAP] : " + this->name + "'s corpse vanishes..." << std::endl;
	else
		std::cout << "[SCAVTRAP] :" + this->name + " vanishes..." << std::endl;
}

void	ScavTrap::challengeNewcomer()
{
	std::string	challenge_list[5] = {"Shi Fu Mi", "Chess", "Poker", "Monopoly", "Connect 4"};
	static int random = 0;
	srand (time(0) + random++);
	int i = rand() % 5;
	std::cout << "[CHALLENGE] Hello fellow traveler I challenge you in a " + challenge_list[i] + " game." << std::endl;
}


std::ostream	&operator<<(std::ostream &out, ScavTrap const & temp)
{
	out << temp.getEnergy();
	return out;
}
