/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 22:49:53 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/29 23:54:42 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template< typename T >
class MutantStack : public std::stack<T>
{
private:

public:
	MutantStack<T>();
	MutantStack<T>(MutantStack const &copied);
	MutantStack<T> &operator=(MutantStack const &rhs);
	virtual ~MutantStack<T>();
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin(){
		return (std::stack<T>::c.begin());
	}
	const_iterator begin() const{
		return (std::stack<T>::c.begin());
	}
	iterator end(){
		return (std::stack<T>::c.end());
	}
	const_iterator end() const{
		return (std::stack<T>::c.end());
	}
	reverse_iterator rbegin(){
		return (std::stack<T>::c.rbegin());
	}
	const_reverse_iterator rbegin() const{
		return (std::stack<T>::c.rbegin());
	}
	reverse_iterator rend(){
		return (std::stack<T>::c.rend();
	}
	const_reverse_iterator rend() const{
		return (std::stack<T>::c.rend());
	}
};

#endif
