/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:24:19 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/18 17:46:02 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <cstdlib>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
private :
	AMateria();
protected:
	std::string _type;
	unsigned int _xp;
public:
	AMateria(std::string const & type);
	AMateria(AMateria const &copied);
	virtual ~AMateria();
	AMateria &operator=(AMateria const &rhs);
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
