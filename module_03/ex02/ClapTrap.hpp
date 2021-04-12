/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:06:25 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/12 19:37:35 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <unistd.h>
class ClapTrap
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
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap & copied);
	ClapTrap	&operator=(ClapTrap const &rhs);
	~ClapTrap();
	int		getEnergy() const;
	void	display_stats();
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

std::ostream	&operator<<(std::ostream &out, ClapTrap const &temp);

#endif
