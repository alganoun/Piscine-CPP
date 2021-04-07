/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 15:26:27 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/07 11:30:34 by allanganoun      ###   ########.fr       */
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
	ss << "0x" << std::uppercase << std::hex << adr;
	return (ss.str());
}
