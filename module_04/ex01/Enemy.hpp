/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:27:31 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/17 02:52:00 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
private:
	Enemy();
protected:
	int pv;
	int max_pv;
	std::string type;
public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &copied);
	virtual ~Enemy();
	Enemy	&operator=(Enemy const &rhs);
	std::string const &getType() const;
	int getPV() const;
	virtual void takeDamage(int amount);
};

#endif
