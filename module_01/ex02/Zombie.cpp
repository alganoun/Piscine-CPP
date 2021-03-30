/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:04:52 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/30 14:36:50 by alganoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
:name (name), type(type)
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
