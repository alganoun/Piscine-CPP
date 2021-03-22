/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:22:31 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/22 14:56:38 by alganoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
			if (index >= 7)
				std::cout << MAX_CONTACT << std::endl;
			else
			{
				index++;
				if (list[index].get_contact_info(index + 1) == -1)
					return (0);
			}
		}
		else if (line == "SEARCH" && index == -1)
			std::cout << "The Phonebook is empty.\n" << std::endl;
		else if (line == "SEARCH" && index > -1)
		{
			std::cout << TAB_LINE;
			std::cout << TAB_TITLE;
			for (int count = 0; count <= index; count++)
				list[count].display_contact_list();
			std::cout << TAB_LINE;
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
	return (0);
}
