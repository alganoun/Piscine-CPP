/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:36:35 by alganoun          #+#    #+#             */
/*   Updated: 2021/04/07 11:48:00 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::ifstream file;
	std::string dup;
	std::size_t find;
	int founded = 0;
	if (argc != 4)
		std::cout << "You need to specify a seqence to remplace and a remplacing sequence." << std::endl;
	else
	{
		if (std::string(argv[2]) == "")
		{
			std::cout << "Please enter a word to that need to be replaced" << std::endl;
			return (-1);
		}
		file.open(argv[1]);
		if (file.is_open()) // mettre un messsage d'erreur. voir si on a pas l'accès voir pour .fail
		{
			dup = std::string((std::istreambuf_iterator<char>(file)), (std::istreambuf_iterator<char>()));
			find = dup.find(std::string(argv[2]));
			while (find != std::string::npos)
			{
				founded = find;
				dup.replace(find, std::string(argv[2]).length(), std::string(argv[3]));
				find = dup.find(std::string(argv[2]), founded + std::string(argv[3]).length());
			}
			if (founded != 0)
			{
				std::ofstream rep_file(std::string(std::string(argv[1]) + ".replace"));
				rep_file << dup;
				rep_file.close();
			}
			else
				std::cout << "Nothing to replace in the file." << std::endl;
			file.close();
		}
		else
			std::cout << "Couldn't open the file." << std::endl;
	}
	return (0);
}
