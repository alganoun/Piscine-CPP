/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:49:36 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/18 17:16:21 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <cstdlib>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_inventory[4];
	int _index;
	Character();
public:
	Character(std::string const &name);
	Character(Character const &copied);
	virtual ~Character();
	Character &operator=(Character const &rhs);
	virtual std::string const &getName() const;
	virtual void	equip(AMateria *m);
	virtual void	unequip(int index);
	virtual void	use(int index, ICharacter &target);

};

#endif
