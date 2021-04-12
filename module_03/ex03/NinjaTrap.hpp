/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:23:19 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/12 20:37:49 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <unistd.h>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class NinjaTrap
{
protected:
	int			hp;
	int			max_hp;
	int			energy;
	int			max_energy;
	int			lvl;
	int			melee;
	int			ranged;
	int			armor_red;

	std::string	name;
	std::string	attack_name;
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap & copied);
	NinjaTrap	&operator=(NinjaTrap const &rhs);
	~NinjaTrap();
	int		getEnergy() const;
	void	display_stats();
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	ninjaShoebox(FragTrap &FragTrap);
	void	ninjaShoebox(FragTrap &ScavTrap);
	void	ninjaShoebox(FragTrap &Claptrap);
	void	ninjaShoebox(FragTrap &NinjaTrap);
};

std::ostream	&operator<<(std::ostream &out, NinjaTrap const &temp);

#endif
