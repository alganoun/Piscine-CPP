/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 22:11:54 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/19 12:38:36 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:

public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &copied);
	virtual ~PlasmaRifle();
	PlasmaRifle &operator=(PlasmaRifle const &rhs);
	std::string getName() const;
	int	getAPCost() const;
	int	getDamages() const;
	void	attack() const;
};

#endif
