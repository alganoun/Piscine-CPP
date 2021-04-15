/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:45:44 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/14 15:46:41 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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
	Superman.beRepaired(20000);
	Superman.vaulthunter_dot_exe("Batman");
	std::cout << "Superman energy is now "<< Superman.getEnergy() << std::endl;
	Superman.takeDamage(50);
	Superman.vaulthunter_dot_exe("Batman");
	std::cout << "Superman energy is now "<< Superman.getEnergy() << std::endl;

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
	Green_Lantern.beRepaired(2000);
	Green_Lantern.takeDamage(50);
	std::cout << std::endl;

	std::cout << std::endl;
	Green_Lantern.display_stats();
	std::cout << std::endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	std::cout << "===================== | Test NinjaTrap | =====================" << std::endl;
	std::cout << std::endl;

	NinjaTrap Robin("Robin");
	std::cout << std::endl;

	Superman.beRepaired(2000);
	Green_Lantern.beRepaired(2000);
	std::cout << std::endl;
	Robin.ninjaShoebox(Green_Lantern);
	std::cout << "Robin energy is now "<< Robin.getEnergy() << std::endl;
	Robin.ninjaShoebox(Superman);
	std::cout << "Robin energy is now "<< Robin.getEnergy() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	Superman.display_stats();
	std::cout << std::endl;

	std::cout << std::endl;
	Green_Lantern.display_stats();
	std::cout << std::endl;

	std::cout << std::endl;
	Robin.display_stats();
	std::cout << std::endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	std::cout << "===================== | Test SuperTrap | =====================" << std::endl;
	std::cout << std::endl;

	FragTrap *Darkseid = new SuperTrap("Darkseid");
	//SuperTrap SteppenWolf(*Darkseid);
	std::cout << std::endl;

	Darkseid->takeDamage(60);
	//SteppenWolf.takeDamage(30);

	std::cout << std::endl;
	Darkseid->display_stats();
	std::cout << std::endl;

	//std::cout << std::endl;
	//SteppenWolf.display_stats();
	//std::cout << std::endl;
	delete Darkseid;

	return (0);
}
