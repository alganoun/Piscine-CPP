/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:08:47 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/23 12:10:50 by alganoun         ###   ########lyon.fr   */
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

	Zombie(std::string name, std::string type);
	~Zombie();
	void	advert();
};




#endif
