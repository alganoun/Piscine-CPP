/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:04:52 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/23 14:27:22 by alganoun         ###   ########lyon.fr   */
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
	std::cout << this->name + " vanished..." << std::endl;
}

void	Zombie::advert()
{
	std::cout << "<" + this->name + this->type + ">"
		+ "Braiiiiiiinnnssss ..." << std::endl;
}
