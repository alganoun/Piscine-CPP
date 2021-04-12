/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:25:13 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/12 18:49:38 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <unistd.h>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap & copied);
	ScavTrap		&operator=(ScavTrap const &rhs);
	~ScavTrap();
	void	challengeNewcomer();
};

std::ostream	&operator<<(std::ostream &out, ScavTrap const &temp);

#endif
