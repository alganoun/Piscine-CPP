/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:04:57 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/19 12:37:51 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	Victim_HPP
# define Victim_HPP

# include <iostream>

class Victim
{
protected:
	std::string name;
	std::string title;
public:
	Victim(std::string name);
	virtual ~Victim();
	std::string	getName() const;
	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Victim const &tmp);

#endif
