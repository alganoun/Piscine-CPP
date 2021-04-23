/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:00:57 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/24 00:01:06 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>

int	check_num(char *str)
{
	int found = 0;
	for (int i = 0 ; str[i] ; i++)
	{
		if (!isdigit(str[i]) && found == 1)
	 	{
			if (str[i] == '.' && i != 0 && isdigit(str[i - 1]))
				found = 1;
			else
				return(-1);
		}
	}
	return (0);
}

int check_precision(char *str)
{
	unsigned int precision = 0;

	if (check_num(str) == 1)
	{
		for (int i = 0 ; str[i] ; i++)
		{
			if(str[i] == '.')
				for (int j = i ; str[j] ; j++)
					precision = j - i; // il faut voir si je n'ai pas mis de dinguerie.
		}
	}
	return (precision);
}

int		check_nan_inf(char *str)
{
	if (std::string(str) == "nan" || std::string(str) == "nanf"
		|| std::string(str) == "-inf" || std::string(str) == "-inff"
		|| std::string(str) == "+inf" || std::string(str) == "+inff")
		return (1);
	return (0);
}

void	char_process(char *str)
{
	std::cout << "Char : ";
	if ((check_num(str) == -1 && strlen(str) != 1) || check_nan_inf(str) == 1)
		std::cout << "Impossible" << std::endl;
	else if (str[0] <= 0 && str[0] >= 31)
		std::cout << "Non Displayable" << std::endl;
	else if (check_num(str) == 1)
	{
		if (atoi(str) <= 0 && atoi(str) >= 31)
			std::cout << "Non Displayable" << std::endl;
		else
			std::cout << static_cast<char>(atoi(str)) << std::endl;
	}
}

void numeric_process(char *str) //il faut gerer le nan et les infs
{
	int i;
	std::stringstream ss(str);
	ss >> i;
	std::cout << "Int : ";
	if ((check_num(str) == -1 && strlen(str) != 1) || check_nan_inf(str) == 1)
		std::cout << "Impossible" << std::endl;
	else if (str[0] <= 0 && str[0] >= 31)
		std::cout << "Non Displayable" << std::endl;
	else if (check_num(str) == 1)
		std::cout << std::fixed << i;
}

void float_process(char *str)
{
	float f;
	std::stringstream ss(str);
	ss >> f;
	std::cout << "Int : ";
	if ((check_num(str) == -1 && strlen(str) != 1) || check_nan_inf(str) == 1)
		std::cout << "Impossible" << std::endl;
	else if (str[0] <= 0 && str[0] >= 31)
		std::cout << "Non Displayable" << std::endl;
	else if (check_num(str) == 1)
		std::cout << std::fixed << std::setprecision(check_precision(str)) << 'f' << f;
}

void double_process(char *str)
{
	float f;
	std::stringstream ss(str);
	ss >> f;
	std::cout << "Int : ";
	if ((check_num(str) == -1 && strlen(str) != 1) || check_nan_inf(str) == 1)
		std::cout << "Impossible" << std::endl;
	else if (str[0] <= 0 && str[0] >= 31)
		std::cout << "Non Displayable" << std::endl;
	else if (check_num(str) == 1)
		std::cout << std::fixed << std::setprecision(check_precision(str)) << 'f' << f;
}
// int check_nan_inf(char *str)
// {
// 	if (std::string(str) == "nan"  || std::string(str) == "nanf")
// 		std::cout << "char : impossible" << std::endl;
// }

int main(int argc, char **argv)
{
	int i;
	char c;
	float f;
	double d;
	if (argc != 2)
	{
		std::cout << "Wrong number of argument." << std::endl;
		return (0);
	}
	if (check_num(argv[1]) == -1 && strlen(argv[1]) != 1)
	{
		std::cout << ""
	}
	std::string s = "a";
    std::stringstream geek(s);
    // The object has the value 12345 and stream
    // it to the integer x
    int x = 0;
    geek >> x;

    std::cout << "Value of x : " << std::fixed << std::setprecision(10)<< x;

    return 0;
}
