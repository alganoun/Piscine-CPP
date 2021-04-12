/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:25:13 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/12 19:48:55 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <unistd.h>
class ScavTrap
{
private:
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
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap & copied);
	~ScavTrap();
	ScavTrap	&operator=(ScavTrap const &rhs);
	int		getEnergy() const;
	void	display_stats();
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer();
};

std::ostream	&operator<<(std::ostream &out, ScavTrap const &temp);
#endif