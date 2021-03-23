/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:22:00 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/23 12:05:09 by alganoun         ###   ########lyon.fr   */
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
	void	setZombieType();
	Zombie	*newZombie(std::string name);
};

#endif
