/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:27:28 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/17 19:36:31 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <cstdlib>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
private:

public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &copied);
	virtual ~AssaultTerminator();
	AssaultTerminator &operator=(AssaultTerminator const &rhs);
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif
