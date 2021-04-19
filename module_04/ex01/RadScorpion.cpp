/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:32:30 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/16 16:04:06 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
:Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &copied)
:Enemy(copied)
{
	//std::cout << "RadScorpion copy constructor called." << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion	&RadScorpion::operator=(RadScorpion const &rhs)
{
	if (this == &rhs)
		return (*this);
	Enemy::operator=(rhs);
	return (*this);
}

void	RadScorpion::takeDamage(int amount)
{
	Enemy::takeDamage(amount);
}
