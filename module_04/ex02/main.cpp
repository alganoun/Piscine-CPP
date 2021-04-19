/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:34:35 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/18 18:34:47 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* tyson = new TacticalMarine;
	*tyson = *jim;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(tyson);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}
