/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:55:43 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/18 15:56:17 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <cstdlib>
# include "AMateria.hpp"

class Cure : public AMateria
{
private :

public:
	Cure();
	Cure(Cure const & copied);
	virtual ~Cure();
	Cure &operator=(Cure const &rhs);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
