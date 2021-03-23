/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:13:06 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/23 07:18:22 by alganoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	caps_maker(std::string *str)
{
	int i;

	i = 0;
	while ((*str)[i])
	{
		(*str)[i] = toupper((*str)[i]);
		i++;
	}
}

int		write_error(std::string str)
{
	std::cout << str << std::endl;
	return (-1);
}

int		smart_getline(std::string *str, int option)
{
	std::getline(std::cin, *str);
	if (option == CAPS_ON)
	{
		caps_maker(str);
		for (int i = 0; (*str)[i]; i++)
			while (((*str)[i] >= 9 && (*str)[i] <= 13) || (*str)[i] == 32)
				(*str).erase((*str).begin() + i);
	}
	if (std::cin.fail() == 1)
	{
		std::cout << std::endl;
		return (-1);
	}
	return (0);
}
