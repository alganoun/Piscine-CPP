/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:27:15 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/17 03:30:09 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const & type)
:pv(hp), max_pv(hp), type(type)
{
	//std::cout << "Default Enemy constructor called." << std::endl;
}

Enemy::Enemy(Enemy const &copied)
{
	*this = copied;
	//std::cout << "Default Enemy copy constructor called." << std::endl;
}

Enemy::~Enemy()
{
	//std::cout << "Default Enemy destructor called." << std::endl;
}

Enemy	&Enemy::operator=(Enemy const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->pv = rhs.pv;
	this->type = rhs.type;
	return (*this);
}

int		Enemy::getPV() const
{
	return (this->pv);
}

std::string const &Enemy::getType() const
{
	return (this->type);
}

void	Enemy::takeDamage(int amount)
{
	if (this->pv > 0 && amount > 0)
	{
		this->pv -=amount;
		if (this->pv < 0)
			this->pv = 0;
		std::cout << "A " + this->type + " enemy took " << amount << " points of damages." << std::endl;
		std::cout << this->type + " HP : " << this->pv << "/" << this->max_pv << std::endl;
	}
	else if (amount <= 0)
		return;
	else
		std::cout << "A " + this->type + " enemy is already dead he can't take more damages." << std::endl;
}


