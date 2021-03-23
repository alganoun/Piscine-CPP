/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 09:49:50 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/23 10:50:19 by alganoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	pony	Pony;
	Pony.eating();
	Pony.growing();
}

void	ponyOnTheHeap()
{
	pony *Pony = new pony;
	Pony->eating();
	Pony->growing();
	delete(Pony);
}

int		main()
{
	std::cout << "-- PONY ON THE STACK -- " << std::endl;
	ponyOnTheStack();
	std::cout << std::endl;
	std::cout << "-- PONY ON THE HEAP --" << std::endl;
	ponyOnTheHeap();
	return (0);
}
