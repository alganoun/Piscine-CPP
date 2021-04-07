/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:31:34 by alganoun          #+#    #+#             */
/*   Updated: 2021/04/07 15:22:27 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	std::cout << "OH NO A ZOMBIE INVASION !" << std::endl;
	this->type = "Default";
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "APOCALYPSE IS OVER" << std::endl;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
}

void	ZombieEvent::randomChump(Zombie **new_Z)
{
	std::string	name_list[5] = {"Rick", "Daryl", "Glenn", "Maggie", "Carl"};

	srand(time(NULL));
	int i = rand() % 5;

	if (name_list[i] == "Maggie")
		ZombieEvent::setZombieType("Female");
	else if (name_list[i] == "Carl")
		ZombieEvent::setZombieType("Child");
	else
		ZombieEvent::setZombieType("Male");
	*new_Z = ZombieEvent::newZombie(name_list[i]);
	(*new_Z)->advert();
}
