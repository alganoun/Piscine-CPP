/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:26:01 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/17 15:36:59 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include <iostream>
# include <cstdlib>

# include "ISpaceMarine.hpp"

class ISquad
{
public:
virtual ~ISquad(){}
virtual int getCount() const = 0;
virtual ISpaceMarine* getUnit(int n) const = 0;
virtual int push(ISpaceMarine *marine) = 0;

};

#endif
