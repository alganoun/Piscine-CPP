/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 01:37:22 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/14 16:44:27 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Pony.hpp"
int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Pony woodie("Woodie");
	std::cout << robert << jim << joe << woodie;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(woodie);
	return 0;
}
