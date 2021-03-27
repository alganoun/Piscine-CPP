/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:08:47 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/27 15:10:46 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ZOMBIE_HPP
# define	ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:

	std::string name;
	std::string type;

public:

	Zombie();
	~Zombie();
	void	SetName(std::string name);
	void	SetType(std::string type);
	std::string	GetName();
	void	announce();
	void	RandomAttributes();
};




#endif
