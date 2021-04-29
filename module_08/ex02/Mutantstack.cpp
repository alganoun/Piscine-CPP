/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 23:13:41 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/29 23:46:00 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
:std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &copied)
:std::stack<T>(copied)
{
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack const &rhs)
{
	std::stack<T>operator=(rhs);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}
