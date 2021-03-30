/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 08:33:01 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/30 13:35:20 by alganoun         ###   ########lyon.fr   */
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
	Fixed(const Fixed &copy);
	Fixed &operator=(Fixed const &rhs);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

# endif
