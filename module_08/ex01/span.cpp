/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:25:01 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/29 17:44:28 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N)
:size(N), index(0)
{
	this->vect = new std::vector<int>[N];
}

Span::Span(Span const  &copied)
{
	*this = copied;
}

Span::~Span()
{
	delete [] this->vect;
}

Span	&Span::operator=(Span const &rhs)
{
	if (this == &rhs)
		return (*this);
	if (this->size > 0)
		delete [] this->vect;
	this->size = rhs.size;
	if (rhs.size > 0)
	{
		this->vect = new std::vector<int>[rhs.size];
		for (int i = 0 ; i < rhs.size ; i++)
			this->vect->at(i) = rhs.vect->at(i);
	}
	return (*this);
}

const char *Span::IsFull::what() const throw()
{
	return ("The tab is full you can't add numbers.");
}

const char *Span::NoSpan::what() const throw()
{
	return ("You need more numbers to find a Span.");
}

const char *Span::Double::what() const throw()
{
	return ("You need to add unique numbers.");
}

void	Span::addNumber(int to_add)
{
	if (this->index < this->size)
	{
		for(int i = 0 ; i < index ; i++)
			if (this->vect->at(i) == to_add)
				throw Double();
		this->vect->push_back(to_add);
		this->index++;
	}
	else
		throw IsFull();
}

void	Span::addNumber(int begin, int end)
{
	for(int i = begin ; i <= end ; i++)
	{
		if (this->index < this->size)
		{
			this->vect->push_back(i);
			this->index++;
		}
		else
			throw IsFull();
	}
}

int		Span::shortestSpan()
{
	int result = INT_MAX;
	if (this->index < 2)
		throw NoSpan();
	for (int i = 0 ; i < this->index - 1 ; i++)
		for(int j = i + 1 ; j < this->index ; j++)
			if (abs(this->vect->at(i) - this->vect->at(j)) < result)
				result = abs(this->vect->at(i) - this->vect->at(j));
	return (result);
}

int		Span::longestSpan()
{
	int result = 0;
	if (this->index < 2)
		throw NoSpan();
	for (int i = 0 ; i < this->index - 1 ; i++)
		for(int j = i + 1 ; j < this->index ; j++)
			if (abs(this->vect->at(i) - this->vect->at(j)) > result)
				result = abs(this->vect->at(i) - this->vect->at(j));
	return (result);
}
