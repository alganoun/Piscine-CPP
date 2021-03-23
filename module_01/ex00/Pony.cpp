/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 08:28:07 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/23 10:48:09 by alganoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

pony::pony()
{
	std::cout << "Pony is born." << std::endl;
}

pony::~pony()
{
	std::cout << "Pony dies." << std::endl;
}

void	pony::set_age()
{
	this->age = 5;
}

void	pony::set_weight()
{
	this->weight = 50;
}

void	pony::growing()
{
	this->age += 10;
	std::cout << "Wow, Pony is growing up !" << std::endl;
}

void	pony::eating()
{
	this->weight += 10;
	std::cout << "Pony is eating, he is gaining weight." << std::endl;
}
