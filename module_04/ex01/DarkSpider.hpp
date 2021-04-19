/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DarkSpider.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 20:08:47 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/16 20:09:15 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DARKSPIDER_HPP
# define DARKSPIDER_HPP

#include <iostream>
#include "Enemy.hpp"

class DarkSpider : public Enemy
{
private:

public:
	DarkSpider();
	DarkSpider(DarkSpider const &copied);
	virtual ~DarkSpider();
	DarkSpider	&operator=(DarkSpider const &rhs);
	virtual void takeDamage(int amount);
};

#endif
