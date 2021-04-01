/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 09:42:27 by alganoun          #+#    #+#             */
/*   Updated: 2021/04/02 01:24:36 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit_nb  = 8;

Fixed::Fixed()
:fixed_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
	this->fixed_value = nb << bit_nb;
}

Fixed::Fixed(const float nb)
{
	this->fixed_value = roundf(nb * (1 << bit_nb));
}


Fixed::Fixed(const Fixed &copied)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copied;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_value = rhs.getRawBits();
	return (*this);
}



int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fixed_value / (float)(1 << bit_nb));
}

int		Fixed::toInt(void)	const
{
	return (this->fixed_value >> bit_nb);
}

std::ostream &operator<<(std::ostream &out, Fixed const &tmp)
{
	out << tmp.toFloat();
	return (out);
}
