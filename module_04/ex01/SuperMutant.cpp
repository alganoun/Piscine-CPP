/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:14:52 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/16 16:04:16 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
:Enemy(170, "Super")
{
	std::cout << "Gaaah. Break everything!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copied)
:Enemy(copied)
{
	std::cout << "SuperMutant copy constructor called." << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &rhs)
{
	if (this == &rhs)
		return (*this);
	Enemy::operator=(rhs);
	return (*this);
}

void	SuperMutant::takeDamage(int amount)
{
	amount -= 3;
	Enemy::takeDamage(amount);
}
