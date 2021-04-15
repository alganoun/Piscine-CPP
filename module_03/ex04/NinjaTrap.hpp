/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:23:19 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/14 15:45:49 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
private:

public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap & copied);
	virtual ~NinjaTrap();
	NinjaTrap	&operator=(NinjaTrap const &rhs);
	void	ninjaShoebox(FragTrap &FragTrap);
	void	ninjaShoebox(ScavTrap &ScavTrap);
	void	ninjaShoebox(ClapTrap &Claptrap);
	void	ninjaShoebox(NinjaTrap &NinjaTrap);
};

#endif
