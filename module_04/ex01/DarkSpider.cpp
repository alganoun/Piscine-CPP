/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DarkSpider.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:57:44 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/19 12:40:03 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DarkSpider.hpp"

DarkSpider::DarkSpider()
:Enemy(80, "Dark Spider")
{
	std::cout << "* hiiiiiiiii *" << std::endl;
}

DarkSpider::DarkSpider(DarkSpider const &copied)
:Enemy(copied)
{
	//std::cout << "DarkSpider copy constructor called." << std::endl;
}

DarkSpider::~DarkSpider()
{
	std::cout << "* SCRATCH *" << std::endl;
}

DarkSpider	&DarkSpider::operator=(DarkSpider const &rhs)
{
	if (this == &rhs)
		return (*this);
	Enemy::operator=(rhs);
	return (*this);
}

void	DarkSpider::takeDamage(int amount)
{
	Enemy::takeDamage(amount);
}
