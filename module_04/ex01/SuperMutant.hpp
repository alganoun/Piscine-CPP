/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:13:54 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/16 15:29:14 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:

public:
	SuperMutant();
	SuperMutant(SuperMutant const &copied);
	virtual ~SuperMutant();
	SuperMutant	&operator=(SuperMutant const &rhs);
	virtual void takeDamage(int amount);
};

#endif
