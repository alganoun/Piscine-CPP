/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 21:19:44 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/29 00:16:17 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::list<int> lst;
	int nb[5] = {0, 1, 2, 3, 4};
	for (int i = 0 ; i < 5 ; i++)
		lst.push_back(nb[i]);
	std::cout << "Let's find data\n" << std::endl;
	try
	{
		easyfind(lst, 0);
		easyfind(lst, 1);
		easyfind(lst, 2);
		easyfind(lst, 3);
		easyfind(lst, 4);
		easyfind(lst, 5);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
