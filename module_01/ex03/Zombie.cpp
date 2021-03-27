/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:04:52 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/27 15:11:30 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->RandomAttributes();
	std::cout << this->name + " appears !" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name + " vanished...\n" << std::endl;
}

void	Zombie::SetName(std::string name)
{
	this->name = name;
}

void	Zombie::SetType(std::string type)
{
	this->type = type;
}

std::string	Zombie::GetName()
{
	return(this->name);
}

void	Zombie::announce()
{
	std::cout << "<" + this->name + " " + this->type + ">"
		+ " Braiiiiiiinnnssss ..." << std::endl;
}

void	Zombie::RandomAttributes()
{
	std::string	name_list[10] = {"Rick", "Daryl", "Glenn",
								"Maggie", "Carl", "Jim",
								"Will", "Don", "Hershel", "Rita"};

	std::string type_list[5] = {"Original", "Mutant", "Secundo Mutant",
								"Tertio Mutant", "Quatro Mutant"};
	int i = rand() % 10;
	int j = rand() % 5;
	Zombie::SetName(name_list[i]);
	Zombie::SetType(type_list[j]);
}
