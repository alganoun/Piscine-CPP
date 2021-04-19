/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 02:23:57 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/19 12:38:28 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:

public:
	PowerFist();
	PowerFist(PowerFist const &copied);
	virtual ~PowerFist();
	PowerFist &operator=(PowerFist const &rhs);
	std::string getName() const;
	int	getAPCost() const;
	int	getDamages() const;
	void	attack() const;
};

#endif
