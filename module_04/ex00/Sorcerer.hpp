/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 01:39:57 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/19 16:10:19 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string name;
	std::string title;
public:
	Sorcerer(std::string name, std::string title);
	virtual ~Sorcerer();
	std::string	getName() const;
	std::string	getTitle() const;
	void	polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &tmp);

#endif
