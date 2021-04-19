/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DoomBlades.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 03:18:48 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/19 12:38:13 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOMBLADES_HPP
# define DOOMBLADES_HPP

# include "AWeapon.hpp"

class DoomBlades : public AWeapon
{
private:

public:
	DoomBlades();
	DoomBlades(DoomBlades const &copied);
	virtual ~DoomBlades();
	DoomBlades &operator=(DoomBlades const &rhs);
	std::string getName() const;
	int	getAPCost() const;
	int	getDamages() const;
	void	attack() const;
};

#endif
