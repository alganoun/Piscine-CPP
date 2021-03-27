/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:55:47 by allanganoun       #+#    #+#             */
/*   Updated: 2021/03/24 18:34:13 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie	*Horde;
	int		Zombies_nb;

public:
	ZombieHorde(int n);
	~ZombieHorde();
	void	announce();
};


#endif

