/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 15:33:19 by allanganoun       #+#    #+#             */
/*   Updated: 2021/03/28 18:02:18 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

const Brain		Human::getBrain() const
{
	return(this->brain);
}

std::string		Human::identifier() const
{
	return (this->brain.identifier());
}


