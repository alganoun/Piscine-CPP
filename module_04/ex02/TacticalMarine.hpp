/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:42:27 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/17 19:36:39 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include <cstdlib>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:

public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &copied);
	virtual ~TacticalMarine();
	TacticalMarine &operator=(TacticalMarine const &rhs);
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif
