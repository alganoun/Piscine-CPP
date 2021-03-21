/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:36:08 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/21 17:52:26 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		contact::set_info(std::string info, std::string *str)
{
	std::cout << info << std::endl;
	if (smart_getline(str, 0) == -1)
		return (-1);
	return (0);
}

int		contact::get_contact_info(int n)
{
	this->contact_n[0] = n + 48;
	std::cout << "\nEnter CONTACT N." + std::string(this->contact_n) + " informations below :\n"  << std::endl;
	if (contact::set_info("\nFirst Name :", &this->first_name) == -1)
		return (-1);
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
	while (check_mail(this->email_adress) == -1)
		if (contact::set_info("\nE-mail Adress :", &this->email_adress) == -1)
			return (-1);
	if (contact::set_info("\nPhone Number :", &this->phone_number) == -1)
		return (-1);
	while (check_number(this->phone_number) == -1)
		if (contact::set_info("\nPhone Number :", &this->phone_number) == -1)
			return (-1);
	if (contact::set_info("\nBirthday Date (MM/JJ/YY):", &this->bday_date) == -1)
		return (-1);
	while (check_birthday(this->bday_date) == -1)
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
	std::cout << TAB_LINE << std::endl;
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
	std::cout << "Postal adress : " + this->postal_adress << std::endl;
	std::cout << "Postal adress : " + this->email_adress << std::endl;
	std::cout << "Postal adress : " + this->phone_number << std::endl;
	std::cout << std::endl;
}

int		main()
{
	int			index = -1;
	contact		list[8];
	std::string	line;

	std::cout << std::string(WELCOME) << std::endl;
	while (line != "EXIT")
	{
		std::cin.clear();
		std::cout << std::string(ADD_MAN) + std::string(SEARCH_MAN) + std::string(EXIT_MAN) << std::endl;
		if (smart_getline(&line, CAPS_ON) == -1)
			return (0);
		if (line == "EXIT")
		{
			std::cout << EXIT_WARNING << std::endl;
			if (smart_getline(&line, CAPS_ON) == -1)
				return (0);
			if (line == "Y")
				line = "EXIT";
		}
		else if (line == "ADD")
		{
			index++;
			if (index > 7)
				std::cout << MAX_CONTACT << std::endl;
			else
				if (list[index].get_contact_info(index + 1) == -1)
					return (0);
		}
		else if (line == "SEARCH" && index == -1)
			std::cout << "The Phonebook is empty.\n" << std::endl;
		else if (line == "SEARCH" && index > -1)
		{
			std::cout << TAB_LINE;
			std::cout << TAB_TITLE;
			for (int count = 0; count <= index; count++)
				list[count].display_contact_list();
			std::cout << TAB_LINE << std::endl;
			while (line != "MENU")
			{
				std::cout << SEARCH_MORE << std::endl;
				std::cout << MENU_BACK << std::endl;
				if (smart_getline(&line, CAPS_ON) == -1)
					return (0);
				if (line.length() == 1 && line[0] - 48 >= 1 && line[0] - 48 <= 8)
					list[line[0] - 48 - 1].display_specific_info();
				else if (line != "MENU")
					std::cout << COMMAND_ERROR << std::endl;
			}
		}
		else
			std::cout << COMMAND_ERROR << std::endl;
	}
	std::cout << EXIT_MESSAGE << std::endl;
}
