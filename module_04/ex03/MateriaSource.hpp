/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:56:28 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/18 17:18:01 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <cstdlib>

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_source[4];
	int _index;
public:
	MateriaSource();
	MateriaSource(MateriaSource const &copied);
	virtual ~MateriaSource();
	MateriaSource &operator=(MateriaSource const &rhs);
	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);
};

#endif
