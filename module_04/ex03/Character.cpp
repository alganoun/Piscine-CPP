/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:47:39 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/18 18:21:52 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const &name)
:_name(name), _index(0)
{
	for (int i = 0 ; i < 4 ; i++)
		this->_inventory[i] = NULL;
	//td::cout << "Character constructor called" << std::endl;
}

Character::Character(Character const &copied)
{
	*this = copied;
	//std::cout << "Character copy constructor called." << std::endl;
}

Character::~Character()
{
	for (int i = 0 ; i < 4 ; i++)
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	//std::cout << "Character destructor called." << std::endl;
}

Character	&Character::operator=(Character const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_index = rhs._index;
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
		if (rhs._inventory[i] != NULL)
			this->_inventory[i] = rhs._inventory[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	if (m && this->_inventory[this->_index] == NULL)
	{
		this->_inventory[this->_index] = m;
		//std::cout << m->getType() + " correctly equiped by " + this->_name + "." << std::endl;
		if (this->_index < 4)
			this->_index++;
	}
}

void	Character::unequip(int index)
{
	if (index >= this->_index && this->_inventory[index] != NULL)
	{
		std::cout << this->_inventory[index]->getType() + " has been unequiped." << std::endl;
		this->_inventory[index] = NULL;
	}
}

void	Character::use(int index, ICharacter &target)
{
	if (index <= this->_index && this->_inventory[index] != NULL)
		this->_inventory[index]->use(target);
}
