/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:18:52 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/24 12:52:03 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main()
{
	ZombieEvent event;
	Zombie *new_Z;
	Zombie	Original("Will", "Original prime");


	Original.advert();
	std::cout << std::endl;

	new_Z = new Zombie("Shawn", "Prime Mutant");
	new_Z->advert();
	delete(new_Z);

	new_Z = event.newZombie("Jim");
	new_Z->advert();
	delete(new_Z);

	event.setZombieType("Secundo Mutant");
	new_Z = event.newZombie("Don");
	new_Z->advert();
	delete(new_Z);

	event.randomChump(&new_Z);
	delete(new_Z);
	return (0);
}
