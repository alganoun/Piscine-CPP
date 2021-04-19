/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reaper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:56:49 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/16 19:57:33 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Reaper.hpp"

Reaper::Reaper()
:Enemy(80, "Reaper")
{
	std::cout << "* BWOOOONG *" << std::endl;
}

Reaper::Reaper(Reaper const &copied)
:Enemy(copied)
{
	//std::cout << "Reaper copy constructor called." << std::endl;
}

Reaper::~Reaper()
{
	std::cout << "* BOUM *" << std::endl;
}

Reaper	&Reaper::operator=(Reaper const &rhs)
{
	if (this == &rhs)
		return (*this);
	Enemy::operator=(rhs);
	return (*this);
}

void	Reaper::takeDamage(int amount)
{
	Enemy::takeDamage(amount);
}
