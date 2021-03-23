/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:31:34 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/23 14:26:24 by alganoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType()
{
	this->type = "vert";
}

Zombie	*newZombie(std::string name)
{
	Zombie *new_Z = new Zombie(name, this->type);
	return (new_Z)
}
