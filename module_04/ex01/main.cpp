/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:04:07 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/18 19:21:29 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Reaper.hpp"
#include "DarkSpider.hpp"
#include "DoomBlades.hpp"

int main()
{
	Character *DoomSlayer = new Character("Doom Slayer");
	std::cout << *DoomSlayer;
	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();
	DoomSlayer->equip(pr);
	std::cout << *DoomSlayer;
	DoomSlayer->equip(pf);
	DoomSlayer->attack(b);
	std::cout << *DoomSlayer;
	DoomSlayer->equip(pr);
	std::cout << *DoomSlayer;
	DoomSlayer->attack(b);
	std::cout << *DoomSlayer;
	DoomSlayer->attack(b);
	std::cout << *DoomSlayer;

	std::cout << "\n==================== Custom Tests ====================\n" << std::endl;

	Enemy *reaper = new Reaper();
	Enemy *darkspider = new DarkSpider();
	AWeapon *doomblades = new DoomBlades();
	DoomSlayer->recoverAP();
	DoomSlayer->recoverAP();
	DoomSlayer->recoverAP();
	DoomSlayer->recoverAP();
	DoomSlayer->recoverAP();
	delete darkspider;
	DoomSlayer->attack(darkspider);
	DoomSlayer->equip(doomblades);
	DoomSlayer->attack(darkspider);
	DoomSlayer->attack(reaper);
	delete pr;
	delete pf;
	//delete darkspider;
	delete reaper;
	delete doomblades;
	delete DoomSlayer;
	return 0;
}
