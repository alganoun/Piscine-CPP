/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:36:08 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/22 15:01:02 by alganoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		contact::set_info(std::string info, std::string *str)
{
	std::cout << info << std::endl;
	if (smart_getline(str, CAPS_OFF) == -1)
		return (-1);
	return (0);
}

int		contact::check_number(std::string str)
{
	if (str.length() < 1)
		return (write_error(PHONE_ERROR));
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] < '0' || str[i] > '9')
			return (write_error(PHONE_ERROR));
	return (0);
}

int		contact::check_birthday(std::string str)
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

int		contact::check_name(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if ((str[i] <'a' || str[i] >'z') && (str[i] <'A' || str[i] >'Z'))
			return (write_error(NAME_ERROR));
		i++;
	}
	return (0);
}

int		contact::check_mail(std::string str)
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

int		contact::get_contact_info(int n)
{
	this->contact_n[0] = n + 48;
	std::cout << "\nEnter CONTACT N." + std::string(this->contact_n) + " informations below :"  << std::endl;
	if (contact::set_info("\nFirst Name :", &this->first_name) == -1)
		return (-1);
	while (contact::check_name(this->first_name) == -1)
		if (contact::set_info("\nFirst Name :", &this->first_name) == -1)
			return (-1);
	if (contact::set_info("\nLast Name :", &this->last_name) == -1)
		return (-1);
	while (contact::check_name(this->last_name) == -1)
		if (contact::set_info("\nLast Name :", &this->last_name) == -1)
			return (-1);
	if (contact::set_info("\nNick Name : ", &this->nickname) == -1)
		return (-1);
	if (contact::set_info("\nLogin :", &this->login) == -1)
		return (-1);
	if (contact::set_info("\nPostal Adress :", &this->postal_adress) == -1)
		return (-1);
	if (contact::set_info("\nE-mail Adress :", &this->email_adress) == -1)
		return (-1);
	while (contact::check_mail(this->email_adress) == -1)
		if (contact::set_info("\nE-mail Adress :", &this->email_adress) == -1)
			return (-1);
	if (contact::set_info("\nPhone Number :", &this->phone_number) == -1)
		return (-1);
	while (contact::check_number(this->phone_number) == -1)
		if (contact::set_info("\nPhone Number :", &this->phone_number) == -1)
			return (-1);
	if (contact::set_info("\nBirthday Date (MM/JJ/YY):", &this->bday_date) == -1)
		return (-1);
	while (contact::check_birthday(this->bday_date) == -1)
		if (contact::set_info("\nBirthday Date (MM/JJ/YY):", &this->bday_date) == -1)
			return (-1);
	if (contact::set_info("\nFavorite Meal : ", &this->fav_meal) == -1)
		return (-1);
	if (contact::set_info("\nUnderwear Color :", &this->under_color) == -1)
		return (-1);
	if (contact::set_info("\nDarkest Secret :", &this->dark_secrets) == -1)
		return (-1);
	std::cout << "\nCONTACT N." + std::string(this->contact_n) + " SUCCESSFULLY ADDED\n"  << std::endl;
	return (0);
}

void	contact::print_data(std::string data)
{
	std::cout << "|";
	if (data.length() < 10)
		data.insert(0, 10 - data.length(), ' ');
	else if (data.length() > 10)
	{
		data.insert(9, 1, '.');
		data.resize(10);
	}
	std::cout << data;
}

void	contact::display_contact_list()
{
	std::cout << TAB_LINE;
	contact::print_data(this->contact_n);
	contact::print_data(this->first_name);
	contact::print_data(this->last_name);
	contact::print_data(this->login);
	std::cout << "|";
}

void	contact::display_specific_info()
{
	std::cout << "============= " + this->first_name  + " " +
		 this->last_name + " =============\n" << std::endl;
	std::cout << "Postal adress	: " + this->postal_adress << std::endl;
	std::cout << "E-mail adress	: " + this->email_adress << std::endl;
	std::cout << "Phone number	: " + this->phone_number << std::endl;
	std::cout << std::endl;
}
