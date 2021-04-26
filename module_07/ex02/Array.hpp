/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:53:56 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/26 20:20:53 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
private:
	int size;
	T *ptr;
public:
	Array();
	Array(unsigned int n);
	Array(Array const &copied);
	~Array();
	class SizeTooBig : std::exception{
		virtual const char *what() const throw();
	};
	Array<T> &operator=(Array<T> const &rhs);
	T	&operator[](int size) const;
	int size() const;
};

template <typename T>
Array<T>::Array()
:size(0), ptr(NULL)
{

}

template <typename T>
Array<T>::Array(unsigned int n)
:size(n), ptr(NULL)
{
	this->ptr = new T[n];
}

template <typename T>
Array<T>::Array(Array const &copied)
{
	this->ptr = new T[copied.size];
	for (int i = 0 ; i < copied.size ; i++)
		this->ptr[i] = copied.ptr[i];
}

template <typename T>
Array<T>::~Array()
{
}

template <typename T>
const char *Array<T>::SizeTooBig::what() const throw()
{
	return ("Out of bounds.");
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs)
{
	if (this == &rhs)
		return (*this);
	if (this->size > 0)
		delete[] this->ptr;
	this->ptr = NULL;
	if (rhs.size > 0)
	{
		this->ptr = new T[rhs.size];
		this->size = rhs.size;
		for (int i = 0 ; i < rhs.size ; i++)
			this->ptr[i] = rhs.ptr[i];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](int index) const
{
	if (index > this->size)
		throw SizeTooBig();
	return (this->ptr[index]);
}

template <typename T>
int	Array<T>::size() const
{
	return (this->size);
}

#endif
