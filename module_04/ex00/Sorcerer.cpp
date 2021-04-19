/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 12:41:34 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/14 13:25:06 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"


Sorcerer::Sorcerer(std::string name, std::string title)
:name(name), title(title)
{
	std::cout << this->name + ", " + this->title + ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name + ", " + this->title + ", is dead. Consequences will be never the same!" << std::endl;
}

std::string	Sorcerer::getName() const
{
	return (this->name);
}

std::string	Sorcerer::getTitle() const
{
	return (this->title);
}

void	Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &tmp)
{
	out << "I am " << tmp.getName() << ", " << tmp.getTitle() << ", and i like ponies!" << std::endl;
	return (out);
}
