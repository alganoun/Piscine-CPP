/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:22:00 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/24 12:26:04 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ZOMBIEEVENT_HPP
# define	ZOMBIEEVENT_HPP

# include	"Zombie.hpp"

class ZombieEvent
{

private :
	std::string type;

public :
	ZombieEvent();
	~ZombieEvent();
	void	setZombieType(std::string type);
	void	randomChump(Zombie **new_Z);
	Zombie	*newZombie(std::string name);
};

#endif
