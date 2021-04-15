/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:45:44 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/15 15:37:58 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "unistd.h"

int main()
{
	std::cout << "===================== | Test FragTrap | =====================" << std::endl;
	std::cout << std::endl;


	FragTrap Superman("Superman");

	std::cout << std::endl;
	Superman.display_stats();
	std::cout << std::endl;

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

	std::cout << std::endl;
	Superman.display_stats();
	std::cout << std::endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	std::cout << "===================== | Test ScavTrap | =====================" << std::endl;
	std::cout << std::endl;

	ScavTrap Green_Lantern("Green Lantern");
	std::cout << std::endl;

	Green_Lantern.display_stats();
	std::cout << std::endl;

	Green_Lantern.takeDamage(50);
	Green_Lantern.takeDamage(50);
	Green_Lantern.beRepaired(30);
	Green_Lantern.challengeNewcomer();
	Green_Lantern.meleeAttack("Superman");
	Green_Lantern.challengeNewcomer();
	Green_Lantern.takeDamage(50);
	Green_Lantern.takeDamage(50);
	Green_Lantern.takeDamage(50);
	std::cout << std::endl;

	std::cout << std::endl;
	Green_Lantern.display_stats();
	std::cout << std::endl;

	return (0);
}
