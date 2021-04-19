/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:36:17 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/14 16:38:19 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PONY_HPP
# define PONY_HPP

# include <iostream>
# include "Victim.hpp"

class Pony : public Victim
{
private:
	Pony();
public:
	Pony(std::string name);
	~Pony();
	std::string	getName() const;
	void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Pony const &tmp);

#endif
