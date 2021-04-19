/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:22:13 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/14 16:45:46 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name)
:Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

std::string	Peon::getName() const
{
	return (this->name);
}

void	Peon::getPolymorphed() const
{
	std::cout << this->name + " was just polymorphed into  a pink pony!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Peon const &tmp)
{
	out << "I am " << tmp.getName() << ", and I like otters!" << std::endl;
	return (out);
}
