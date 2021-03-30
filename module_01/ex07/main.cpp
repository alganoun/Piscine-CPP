/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:36:35 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/30 12:14:01 by alganoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::ifstream file;
	std::string dup;
	size_t find;
	int founded = 0;
	if (argc != 4)
		std::cout << "You need to specify a seqence to remplace and a remplacing sequence." << std::endl;
	else
	{
		file.open(argv[1]); // gerer le argv[2] vide
		if (file.is_open()) // mettre un messsage d'erreur. voir si on a pas l'accès voir pour .fail
		{
			dup = std::string((std::istreambuf_iterator<char>(file)), (std::istreambuf_iterator<char>()));
			find = dup.find(std::string(argv[2]));
			while (find != std::string::npos)
			{
				founded = 1;
				dup.replace(find, std::string(argv[2]).length(), std::string(argv[3]));
				find = dup.find(std::string(argv[2]));
			}
			if (founded != 0)
			{
				std::ofstream rep_file(std::string(std::string(argv[1]) + ".replace"));
				rep_file << dup;
				rep_file.close();
			}
			else
				std::cout << "Nothing to replace in the file." << std::endl;
		}
		file.close();
	}
	return (0);
}
