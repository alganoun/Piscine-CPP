/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:00:17 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/17 19:39:45 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &copied)
{
	*this = copied;
	std::cout << "Tactical marine copy contructor called.";
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &rhs)
{
	(void)rhs;
	return (*this);
}

ISpaceMarine *TacticalMarine::clone() const
{
	TacticalMarine *copy = new TacticalMarine(*this);
	return (copy);
}

void	TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void	TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
