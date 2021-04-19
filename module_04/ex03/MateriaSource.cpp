/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:58:27 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/18 17:23:57 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
:_index(0)
{
	for (int i = 0 ; i < 4 ; i++)
		this->_source[i] = NULL;
	//std::cout << "Materia Source constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copied)
{
	*this = copied;
	//std::cout << "Materia Source copy constructor called." << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0 ; i < 4 ; i++)
		if (this->_source[i] != NULL)
			delete this->_source[i];
	//std::cout << "Materia Source destructor called." << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_index = rhs._index;
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->_source[i] != NULL)
			delete this->_source[i];
		this->_source[i] = rhs._source[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (m && this->_source[this->_index] == NULL)
	{
		this->_source[this->_index] = m;
		if (this->_index < 4)
			this->_index++;
	}
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0 ; i < 4 ; i++)
		if (this->_source[i] && this->_source[i]->getType() == type)
			return (this->_source[i]->clone());
	return (NULL);
}
