/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:30:04 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/15 15:41:55 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <unistd.h>
class FragTrap
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
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &copied);
	~FragTrap();
	FragTrap &operator=(FragTrap const &rhs);
	int		getEnergy() const;
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
	void	display_stats() const;
};

#endif
