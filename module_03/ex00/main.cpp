/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:45:44 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/10 19:59:04 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "unistd.h"

int main()
{
	FragTrap Superman("Superman");
	Superman.vaulthunter_dot_exe("Batman");
	std::cout << "Superman energy is now "<< Superman.getEnergy() << std::endl;
	Superman.takeDamage(50);
	Superman.vaulthunter_dot_exe("Batman");
	std::cout << "Superman energy is now "<< Superman.getEnergy() << std::endl;
	Superman.takeDamage(50);
	Superman.vaulthunter_dot_exe("Batman");
	std::cout << "Superman energy is now "<< Superman.getEnergy() << std::endl;
	Superman.beRepaired(20);
	Superman.vaulthunter_dot_exe("Batman");
	std::cout << "Superman energy is now "<< Superman.getEnergy() << std::endl;
	Superman.takeDamage(50);
	Superman.vaulthunter_dot_exe("Batman");
	std::cout << "Superman energy is now "<< Superman.getEnergy() << std::endl;
	Superman.takeDamage(50);

	return (0);
}
