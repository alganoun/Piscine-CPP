/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:40:47 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/17 02:23:05 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <sstream>
# include <cstdlib>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string name;
	int ap;
	int max_ap;
	AWeapon *weapon;
	Character();
public:
	Character(std::string const &name);
	Character(Character const &copied);
	virtual ~Character();
	Character	&operator=(Character const &rhs);
	std::string const &getName() const;
	int		getAP() const;
	AWeapon	*getWeapon() const;
	void	recoverAP();
	void	equip(AWeapon *weapon);
	void	attack(Enemy *enemy);
	void	displayStats();

};

std::ostream	&operator<<(std::ostream &out, Character const &tmp);

#endif
