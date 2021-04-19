/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:28:34 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/17 19:39:29 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* Teleport from space! *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copied)
{
	*this = copied;
	std::cout << "Assault Terminator copy contructor called.";
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &rhs)
{
	(void)rhs;
	return (*this);
}

ISpaceMarine *AssaultTerminator::clone() const
{
	AssaultTerminator *copy = new AssaultTerminator(*this);
	return (copy);
}

void	AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
