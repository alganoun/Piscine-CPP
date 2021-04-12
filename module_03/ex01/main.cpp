/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:45:44 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/12 11:54:51 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "unistd.h"

int main()
{
	FragTrap Superman("Superman");
	ScavTrap Green_Lantern("Green Lantern");

	Superman.vaulthunter_dot_exe("Green Lantern");
	std::cout << "Superman energy is now "<< Superman.getEnergy() << std::endl;
	Green_Lantern.takeDamage(50);
	Superman.vaulthunter_dot_exe("Green Lantern");
	std::cout << "Superman energy is now "<< Superman.getEnergy() << std::endl;
	Green_Lantern.takeDamage(50);
	Green_Lantern.beRepaired(30);
	Green_Lantern.challengeNewcomer();
	Green_Lantern.meleeAttack("Superman");
	Superman.takeDamage(30);
	Superman.beRepaired(20);
	Green_Lantern.challengeNewcomer();
	Superman.vaulthunter_dot_exe("Green Lantern");
	std::cout << "Superman energy is now "<< Superman.getEnergy() << std::endl;
	Green_Lantern.takeDamage(50);
	Superman.vaulthunter_dot_exe("Green Lantern");
	std::cout << "Superman energy is now "<< Superman.getEnergy() << std::endl;
	Green_Lantern.takeDamage(50);
	Superman.vaulthunter_dot_exe("Green Lantern");
	std::cout << "Superman energy is now "<< Superman.getEnergy() << std::endl;
	Green_Lantern.takeDamage(50);

	return (0);
}
