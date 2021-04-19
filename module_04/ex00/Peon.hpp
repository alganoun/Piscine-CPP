/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:20:11 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/14 14:56:25 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
private:

public:
	Peon(std::string name);
	~Peon();
	std::string	getName() const;
	void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Peon const &tmp);

#endif
