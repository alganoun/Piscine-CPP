/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 18:29:33 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/29 00:17:38 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>

class notFound : public std::exception
{
	virtual const char *what() const throw(){
		return ("Data not found.");
	}
};

template <typename T>
typename T::const_iterator easyfind(T const &list, int to_find)
{
	typename T::const_iterator current = list.begin();
	typename T::const_iterator	last = list.end();
	while (current !=  last)
	{
		if (*current == to_find)
		{
			std::cout << "Data found." << std::endl;
			return (current);
		}
		current++;
	}
	throw notFound();
}
#endif
