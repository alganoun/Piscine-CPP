/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42lyon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:53:56 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/27 01:39:57 by allanganoun      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
private:
	int array_size;
	T *ptr;
public:
	Array();
	Array(unsigned int n);
	Array(Array const &copied);
	~Array();
	class WrongIndex : public std::exception{
		virtual const char *what() const throw();
	};
	Array<T> &operator=(Array<T> const &rhs);
	T	&operator[](int array_size) const;
	int size() const;
};

template <typename T>
Array<T>::Array()
:array_size(0), ptr(NULL)
{

}

template <typename T>
Array<T>::Array(unsigned int n)
:array_size(n), ptr(NULL)
{
	this->ptr = new T[n];
}

template <typename T>
Array<T>::Array(Array const &copied)
{
	*this = copied;
}

template <typename T>
Array<T>::~Array()
{
	if (this->array_size > 0)
		delete [] this->ptr;
}

template <typename T>
const char *Array<T>::WrongIndex::what() const throw()
{
	return ("Out of bounds.");
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs)
{
	if (this == &rhs)
		return (*this);
	if (this->array_size > 0)
		delete[] this->ptr;
	this->ptr = NULL;
	this->array_size = rhs.array_size;
	if (rhs.array_size > 0)
	{
		this->ptr = new T[rhs.array_size];
		for (int i = 0 ; i < rhs.array_size ; i++)
			this->ptr[i] = rhs.ptr[i];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](int index) const
{
	if (index > this->array_size || index < 0)
		throw WrongIndex();
	return (this->ptr[index]);
}

template <typename T>
int	Array<T>::size() const
{
	return (this->array_size);
}

#endif
