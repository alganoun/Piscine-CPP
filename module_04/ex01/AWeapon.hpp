/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:36:06 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/17 02:23:03 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <cstdlib>

class AWeapon
{
protected:
	std::string name;
	int apcost;
	int	damages;

public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const &copied);
	virtual ~AWeapon();
	AWeapon &operator=(AWeapon const &rhs);
	std::string const &getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif
