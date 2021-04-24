/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42lyon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 14:14:16 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/24 03:16:59 by allanganoun      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <iomanip>

int	check_num(char *str)
{
	int found = 0;
	for (int i = 0 ; str[i] ; i++)
	{
		if (!isdigit(str[i]))
	 	{
			if (str[i] == '.' && found == 1)
				return(-1);
			else if (str[i] == '.' && i != 0 && isdigit(str[i - 1]))
				found = 1;
			else
				return (-1);
		}
	}
	return (1);
}

int print_error()
{
	std::cout << "CHAR : Impossible." << std::endl;
	std::cout << "INT : Impossible." << std::endl;
	std::cout << "FLOAT : Impossible." << std::endl;
	std::cout << "DOUBLE : Impossible." << std::endl;
	return (0);
}

int		check_nan_inf(char *str)
{
	if (std::string(str) == "nan" || std::string(str) == "nanf"
		|| std::string(str) == "-inf" || std::string(str) == "-inff"
		|| std::string(str) == "+inf" || std::string(str) == "+inff")
		return (1);
	return (0);
}

int char_process(char *str)
{
	if ((strlen(str) == 1 && isdigit(*str)) 
		|| (strlen(str) != 1 && std::isprint(*str)))
		return (-1);
	std::cout << "CHAR : " << "'" << static_cast<char>(*str) << "'" << std::endl;
	std::cout << "INT : " << static_cast<int>(*str) << std::endl;
	std::cout << std::setprecision(1) << std::fixed << "FLOAT : " << static_cast<float>(*str) << "f" << std::endl;
	std::cout << std::setprecision(1) << std::fixed << "DOUBLE : " << static_cast<double>(*str) << std::endl;
	return (0);

}

int check_precision(char *str)
{
	unsigned int precision = 1;
	if (check_num(str) == 1)
	{
		for (int i = 0 ; str[i] ; i++)
		{
			if(str[i] == '.')
				for (int j = i ; str[j] ; j++)
					precision = j - i;
		}
	}
	return (precision);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (0);
	}
	else if (check_num(argv[1]) == -1 && strlen(argv[1]) != 1 && check_nan_inf(argv[1]) != 1)
		return (print_error());
	double	d;
	d = std::atof(argv[1]);
	if (char_process(argv[1]) == 0)
		return (0);
	if (d < CHAR_MIN || d > CHAR_MAX || check_nan_inf(argv[1]) == 1)
		std::cout << "CHAR : Impossible." << std::endl;
	else if (std::isprint(d))
		std::cout << "CHAR : '" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "CHAR : Non Displayable." << std::endl;

	if (d < INT_MIN || d > INT_MAX || check_nan_inf(argv[1]) == 1)
		std::cout << "INT : Impossible." << std::endl;
	else
		std::cout << "INT : " << static_cast<int>(d) << std::endl;
	std::cout << std::setprecision(check_precision(argv[1])) << std::fixed << "FLOAT : " << static_cast<float>(d) << "f" << std::endl;
	std::cout << std::setprecision(check_precision(argv[1])) << std::fixed << "DOUBLE : " << d << std::endl;
	return (0);
}
