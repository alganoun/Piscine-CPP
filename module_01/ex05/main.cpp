/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:54:04 by allanganoun       #+#    #+#             */
/*   Updated: 2021/03/28 18:05:30 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Human.hpp"

int main()
{
	Human	correcteur;
	std::cout << correcteur.identifier() << std::endl;
	std::cout << correcteur.getBrain().identifier() << std::endl;
	return (0);

}
