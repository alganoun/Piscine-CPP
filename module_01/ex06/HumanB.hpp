/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 18:55:53 by allanganoun       #+#    #+#             */
/*   Updated: 2021/03/28 19:59:25 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon *weapon;
public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon weapon);
	~HumanB();
	std::string getName();
	Weapon *getWeapon();
	void	setName(std::string name);
	void	setWeapon(Weapon weapon);
	void attack();
};
#endif
