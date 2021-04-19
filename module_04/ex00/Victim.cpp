/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:05:59 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/14 16:45:58 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name)
:name(name)
{
	std::cout << "A random victim called " + this->name + " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "The victim " + this->name + " died for no apparent reasons!" << std::endl;
}

std::string	Victim::getName() const
{
	return (this->name);
}

void	Victim::getPolymorphed() const
{
	std::cout << this->name + " was just polymorphed in a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &tmp)
{
	out << "I am " << tmp.getName() << ", and I like otters!" << std::endl;
	return (out);
}
