/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:32:32 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/16 15:29:07 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:

public:
	RadScorpion();
	RadScorpion(RadScorpion const &copied);
	virtual ~RadScorpion();
	RadScorpion	&operator=(RadScorpion const &rhs);
	virtual void takeDamage(int amount);
};

#endif
