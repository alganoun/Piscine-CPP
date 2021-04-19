/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:40:55 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/18 19:23:46 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const &name)
:ap(40), max_ap(40)
{
	this->name = name;
	this->weapon = NULL;
	//std::cout << this->name + " appears on the battlefield." << std::endl;
}

Character::Character(Character const &copied)
{
	*this = copied;
	//std::cout << "Character copy constructor called." << std::endl;
}

Character::~Character()
{
	std::cout << this->name + " died." << std::endl;
}

Character	&Character::operator=(Character const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->name = rhs.name;
	this->ap = rhs.ap;
	this->max_ap = rhs.max_ap;
	this->weapon = rhs.weapon;
	std::cout << "Character assignation operator called." << std::endl;
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->name);
}

int		Character::getAP() const
{
	return (this->ap);
}

AWeapon	*Character::getWeapon() const
{
	return (this->weapon);
}

void	Character::recoverAP()
{
	if (this->ap < this->max_ap)
	{
		this->ap += 10;
		if (this->ap > this->max_ap)
			this->ap = this->max_ap;
	}
}

void	Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
	if (this->weapon != NULL)
		std::cout << "== " + this->name +
			" equips his " + this->weapon->getName()  + " =="<< std::endl;
	this->displayStats();
}

void	Character::attack(Enemy *enemy)
{
	if (!enemy)
		std::cout << "No ennemy to attack." << std::endl;
	else if (this->weapon != NULL && this->ap > this->weapon->getAPCost())
	{
		std::cout << this->name + " attacks " +
			enemy->getType() + " with a " +
				this->weapon->getName() + "." << std::endl;
		this->weapon->attack();
		enemy->takeDamage(this->weapon->getDamage());
		this->ap -= this->weapon->getAPCost();
		if (enemy->getPV() <= 0)
			delete enemy;
	}
	else if (this->weapon != NULL)
		std::cout << this->name + "need more AP to use " + this->weapon->getName() << std::endl;
}

void	Character::displayStats()
{
	if (this->weapon != NULL)
	{

		std::cout << this->weapon->getName() + " Stats :" << std::endl;
		std::cout << "Damages : " << this->weapon->getDamage() << std::endl;
		std::cout << "AP cost : " << this->weapon->getAPCost() << std::endl;
	}
	else
		std::cout << "No weapon stats to display." << std::endl;
	std::cout << std::endl;
}

std::ostream	&operator<<(std::ostream &out, Character const &tmp)
{
	out << tmp.getName() + " has " << tmp.getAP() << " AP";
	if (tmp.getWeapon())
		out << " and carries a " << tmp.getWeapon()->getName() + "\n"<< std::endl;
	else
		out << " and is unarnmed\n" << std::endl;
	return (out);
}
