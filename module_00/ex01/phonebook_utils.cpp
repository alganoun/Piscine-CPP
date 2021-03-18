/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:13:06 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/18 14:30:17 by alganoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		write_error(std::string str)
{
	std::cout << str << std::endl;
	return (-1);
}

int		check_number(std::string str)
{
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] < '0' || str[i] > '9')
			return (-1);
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

	while (str[i] != '@')
	{
		if (str[i] === '@')
			return (0);
	while (str[i] != '.')
		i++;
	if (str[i] != '.')
	return (write_error(MAIL_ERROR));
	return (0);
}

int		smart_getline(std::string *str)
{
	std::getline(std::cin, *str);
	if (std::cin.fail() == 1)
	{
		std::cout << std::endl;
		return (-1);
	}
	return (0);
}
