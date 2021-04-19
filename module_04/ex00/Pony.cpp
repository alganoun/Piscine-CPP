/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:36:16 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/14 16:45:35 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name)
:Victim(name)
{
	std::cout << this->name + " the pony appears!" << std::endl;
}

Pony::~Pony()
{
	std::cout << this->name + " the pony dies." << std::endl;
}

std::string	Pony::getName() const
{
	return (this->name);
}

void	Pony::getPolymorphed() const
{
	std::cout << this->name + " was just polymorphed into an handsome knight!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Pony const &tmp)
{
	out << "I am " << tmp.getName() << ", and I like princesses!" << std::endl;
	return (out);
}
