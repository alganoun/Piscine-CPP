/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:50:06 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/18 14:42:34 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <cstdlib>
# include "AMateria.hpp"

class Ice : public AMateria
{
private :

public:
	Ice();
	Ice(Ice const & type);
	virtual ~Ice();
	Ice &operator=(Ice const &rhs);
	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);
};

#endif
