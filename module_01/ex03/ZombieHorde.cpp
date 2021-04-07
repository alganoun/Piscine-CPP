/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:55:08 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/07 11:24:37 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	this->Horde = new Zombie[n];
	this->Zombies_nb = n;

	if (n < 2)
		std::cout << "No Zombies available to build a badass horde." << std::endl;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->Zombies_nb; i++)
		this->Horde[i].announce();
}

ZombieHorde::~ZombieHorde()
{
	if (this->Zombies_nb >= 2)
		std::cout << "The " + std::to_string(this->Zombies_nb)
			+ " Zombies horde is dead." << std::endl;
	delete [] Horde;
}
