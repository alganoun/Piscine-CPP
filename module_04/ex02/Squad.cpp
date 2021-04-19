/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:50:39 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/18 18:32:39 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
:list(NULL), nb(0)
{
	std::cout << "Squad created." << std::endl;
}

Squad::Squad(Squad const &copy)
{
	std::cout << "Squad copy constructor called." << std::endl;
	*this = copy;
}

Squad::~Squad()
{
	for (int i = 0 ; i < this->nb ; i++)
		delete list[i];
	delete list;
	std::cout << "Squad destructor called." << std::endl;
}

Squad	&Squad::operator=(Squad const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->nb = rhs.nb;
	this->list = new ISpaceMarine*[rhs.nb];
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->list[i] != NULL)
			delete this->list[i];
		if (rhs.list[i] != NULL)
			this->list[i] = rhs.list[i]->clone();
	}
	std::cout << "Squad assignation operator called." << std::endl;
	return (*this);
}

int	Squad::getCount() const
{
	return (this->nb);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	if (n > this->nb || n < 0 || this->nb == 0)
		return (NULL);
	return (this->list[n]);
}


int Squad::push(ISpaceMarine *marine)
{
	if (marine && this->list == NULL)
	{
		this->list = new ISpaceMarine*[1];
		this->list[0] = marine;
	}
	else if (marine)
	{
		ISpaceMarine **tmp = new ISpaceMarine*[this->nb + 1];
		for ( int i = 0 ; i < this->nb ; i++)
			tmp[i] = this->list[i];
		tmp[this->nb] = marine;
		delete this->list;
		this->list = tmp;
	}
	return (++this->nb);
}
