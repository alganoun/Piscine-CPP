/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:45:44 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/07 16:34:37 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "unistd.h"

int main()
{
	FragTrap Superman("Superman");
	FragTrap Batman("Batman");
	Superman.vaulthunter_dot_exe("Batman");
	Batman.takeDamage(Superman.getCurrent());
	sleep(1);
	Superman.vaulthunter_dot_exe("Batman");
	Batman.takeDamage(Superman.getCurrent());
	Batman.beRepaired(Batman.getHp() / 4);

	std::cout << "\n" << std::endl;

	Batman.vaulthunter_dot_exe("Superman");
	Superman.takeDamage(Batman.getCurrent());
	sleep(1);
	Superman.vaulthunter_dot_exe("Batman");
	Batman.takeDamage(Superman.getCurrent());
	Batman.beRepaired(Batman.getHp() / 4 + 1);
	return (0);
}
