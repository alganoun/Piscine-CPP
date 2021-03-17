/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:08:51 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/18 00:08:06 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

# define WELCOME			"\n---------- Phonebook 1.0 by Alganoun ----------\n"
# define ADD_MAN			"- Type ADD to add a contact\n"
# define SEARCH_MAN			"- Type SEARCH to see all added contact\n"
# define EXIT_MAN			"- Type EXIT to exit the progam\n"
# define COMMAND_ERROR		"ERROR : command not found.\n"
# define SEARCH_MORE		"Type Contact number to get more informations on it"
# define MENU_BACK			"Type MENU to go to the Main Menu"
# define ERROR				"Something went wrong with the phonebook."
# define MAX_CONTACT		"Phonebook max capacity, you can't add any more contacts"
# define EXIT_WARNING 		"\n/!\\ ALL contacts will be removed, Continue ? (Y/N)"
# define EXIT_MESSAGE		" Thank you for using Phonebook 1.0, see you soon."
# define TAB_LINE			"\n---------------------------------------------"
# define TAB_LINE_SMALL		"----------" // est ce que je dois refaire des colonnes pour cette partie ?

class	contact
{
	public :

	char		contact_n[1];
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_adress;
	std::string email_adress;
	std::string phone_number;
	std::string bday_date;
	std::string fav_meal;
	std::string under_color;
	std::string dark_secrets;

	void		set_info(std::string info, std::string *line);
	void		get_contact_info(int n);
	void		display_contact_list();
	void		print_data(std::string data);
	void		display_specific_info();
};

#endif
