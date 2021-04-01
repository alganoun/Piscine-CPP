/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 08:33:01 by alganoun          #+#    #+#             */
/*   Updated: 2021/04/02 01:22:07 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	fixed_value;
	static const int bit_nb;
public:
	Fixed();
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed(const Fixed &copy);
	Fixed &operator=(Fixed const &rhs);

	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void)	const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &tmp);

# endif
