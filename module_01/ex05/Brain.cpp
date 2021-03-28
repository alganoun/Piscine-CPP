/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 15:26:27 by allanganoun       #+#    #+#             */
/*   Updated: 2021/03/28 18:06:36 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

int	Brain::GetIQ()
{
	return(this->IQ);
}

std::string		Brain::identifier() const
{
	const long adr = (long)this;
	std::stringstream ss;
	str << "0x" << std::uppercase << std::hex << adr;
	return (ss.str());
}
