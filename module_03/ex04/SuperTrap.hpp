/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:56:38 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/14 16:04:50 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <unistd.h>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
private:

public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap & copied);
	SuperTrap	&operator=(SuperTrap const &rhs);
	virtual ~SuperTrap();

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
};

std::ostream	&operator<<(std::ostream &out, SuperTrap const &temp);

#endif
