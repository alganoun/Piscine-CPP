/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:23:01 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/19 12:41:03 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : virtual public ISquad
{
private:
	ISpaceMarine **list;
	int nb;
public:
	Squad();
	Squad(Squad const &copy);
	virtual ~Squad();
	Squad	&operator=(Squad const &rhs);
	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int n) const;
	virtual int push(ISpaceMarine*);
};

#endif
