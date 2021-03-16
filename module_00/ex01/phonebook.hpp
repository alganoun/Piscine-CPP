/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:08:51 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/16 15:31:34 by alganoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

# define WELCOME			"\n---------- Phonebook 1.0 by Alganoun----------\n"
# define ADD_MAN			"- Type ADD to add a contact\n"
# define SEARCH_MAN			"- Type SEARCH to see all added contact\n"
# define EXIT_MAN			"- Type EXIT to exit the progam\n"
# define COMMAND_ERROR		"ERROR : command not found.\n"
# define ERROR				"Something went wrong with the phonebook."
# define MAX_CONTACT		"Phonebook max capacity, you can't add any more contacts"
# define EXIT_WARNING 		"\n/!\\ ALL contacts will be removed, Continue ? (Y/N)"
# define EXIT_MESSAGE		" Thank you for using Phonebook 1.0, see you soon."

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

	void set_info(std::string info, std::string line);
	void get_contact_info(int n);
};

#endif
