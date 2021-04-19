/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reaper.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 23:16:07 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/16 23:25:33 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAPER_HPP
# define REAPER_HPP

#include <iostream>
#include "Enemy.hpp"

class Reaper : public Enemy
{
private:

public:
	Reaper();
	Reaper(Reaper const &copied);
	virtual ~Reaper();
	Reaper	&operator=(Reaper const &rhs);
	virtual void takeDamage(int amount);
};

#endif
