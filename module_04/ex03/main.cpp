/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 13:12:15 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/18 18:17:56 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	AMateria *ice = new Ice();
	AMateria *cure = new Cure();
	src->learnMateria(ice);
	src->learnMateria(cure);
	ICharacter* me = new Character("me");
	AMateria* tmp1;
	AMateria* tmp2;
	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	ICharacter* you = new Character("you");
	*you = *me;
	you->use(1, *me);
	you->use(0, *me);

	std::cout << tmp1->getXP() << std::endl;
	std::cout << tmp2->getXP() << std::endl;

	delete bob;
	delete me;
	delete src;
	return 0;
}
