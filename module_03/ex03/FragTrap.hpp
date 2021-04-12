/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:30:04 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/12 19:37:44 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <unistd.h>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap & copied);
	FragTrap	&operator=(FragTrap const &rhs);
	~FragTrap();
	void	vaulthunter_dot_exe(std::string const & target);
};

std::ostream	&operator<<(std::ostream &out, FragTrap const &temp);

#endif
