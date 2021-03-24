/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:04:52 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/24 12:51:05 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
:type (type), name (name)
{
	std::cout << this->name + " appears !" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name + " vanished...\n" << std::endl;
}

void	Zombie::advert()
{
	std::cout << "<" + this->name + " " + this->type + ">"
		+ " Braiiiiiiinnnssss ..." << std::endl;
}
