/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:36:08 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/18 00:02:57 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	contact::get_contact_info(int n)
{
	this->contact_n[0] = n + 48;
	std::cout << "\nEnter CONTACT N." + std::string(this->contact_n) + " informations below :\n"  << std::endl;
	contact::set_info("\nFirst Name :", &this->first_name);
	contact::set_info("\nLast Name :", &this->last_name);
	contact::set_info("\nNick Name : ", &this->nickname);
	contact::set_info("\nLogin :", &this->login);
	contact::set_info("\nPostal Adress :", &this->postal_adress);
	contact::set_info("\nE-mail Adress :", &this->email_adress);
	contact::set_info("\nPhone Number :", &this->phone_number);
	contact::set_info("\nBirthday Date (MM/JJ/YY):", &this->bday_date);
	contact::set_info("\nFavorite Meal : ", &this->fav_meal);
	contact::set_info("\nUnderwear Color :", &this->under_color);
	contact::set_info("\nDarkest Secret :", &this->dark_secrets);
	std::cout << "\nCONTACT N." + std::string(this->contact_n) + " SUCCESSFULLY ADDED\n"  << std::endl;

}

void	contact::set_info(std::string info, std::string *str)
{
	std::cout << info << std::endl;
	std::getline(std::cin, *str);
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
	//print_space(10, data.length(), data);
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
	std::cout << TAB_LINE_SMALL << std::endl;
	contact::print_data(this->postal_adress);
	std::cout << "|" << std::endl;
	std::cout << TAB_LINE_SMALL << std::endl;
	contact::print_data(this->email_adress);
	std::cout << "|" << std::endl;
	std::cout << TAB_LINE_SMALL << std::endl;
	contact::print_data(this->phone_number);
	std::cout << "|" << std::endl;
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
		std::getline(std::cin, line);
		if (line == "EXIT")
		{
			std::cout << EXIT_WARNING << std::endl;
			std::getline(std::cin, line);
			if (line == "Y")
				line = "EXIT";
		}
		else if (line == "ADD")
		{
			index++;
			if (index > 7)
				std::cout << MAX_CONTACT << std::endl;
			else
				list[index].get_contact_info(index + 1);
		}
		else if (line == "SEARCH")
		{
			for (int count = 0; count <= index; count++)
				list[count].display_contact_list();
			std::cout << SEARCH_MORE << std::endl;
			std::cout << MENU_BACK << std::endl;
			std::getline(std::cin, line);
			if (line.length() == 1 && line[0] - 48 >= 1 && line[0] - 48 <= 8)
				list[line[0] - 48 - 1].display_specific_info();
		}
		else
			std::cout << COMMAND_ERROR << std::endl;
	}
	std::cout << EXIT_MESSAGE << std::endl;
}
