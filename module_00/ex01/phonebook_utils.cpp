/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:13:06 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/21 17:41:54 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	caps_maker(std::string *str)
{
	int i;

	i = 0;
	while ((*str)[i] && (*str)[i] >= 97 && (*str)[i] <= 122)
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

int		check_number(std::string str)
{
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] < '0' || str[i] > '9')
			return (write_error(PHONE_ERROR));
	return (0);
}

int		check_birthday(std::string str)
{
	if (str.length() != 8)
		return (write_error(DATE_ERROR));
	if (str[0] != '0' && str[0] != '1')
		return (write_error(MONTH_ERROR));
	if (str[0] == '1')
		if (str[1] < '0' || str[1] > '2')
			return (write_error(MONTH_ERROR));
	if (str[2] != '/' || str[5] != '/')
		return (write_error(DATE_ERROR));
	if (str[3] > '3')
		return (write_error(DAY_ERROR));
	if (str[3] == '3')
		if (str[4] != '0' && str[4] != '1')
			return (write_error(DAY_ERROR));
	return (0);
}

int		check_mail(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == '@')
			while (str[i])
			{
				if (str[i] == '.' && str[i + 2] != '\0')
					return (0);
				i++;
			}
		i++;
	}
	return (write_error(MAIL_ERROR));

}

int		smart_getline(std::string *str, int option)
{
	std::getline(std::cin, *str);
	if (option == CAPS_ON)
		caps_maker(str);
	if (std::cin.fail() == 1)
	{
		std::cout << std::endl;
		return (-1);
	}
	return (0);
}
