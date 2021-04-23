/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 14:14:16 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/24 00:05:34 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <iostream>
#include <limits>
#include <math.h>
#include <iomanip>
#include <vector>



int	nb_len(int i, char *str)
{
	while (str[i] && str[i] != '.')
		i++;
	if (str[i] == '.')
		i++;
	return (i);
}

int dec_len(int i, int j, char *str)
{
	int is_f = 0;

	while (str[i + j])
	{
		j++;
		if (str[i + j] == 'f')
			is_f++;
	}
	if (j > 5)
		j = 5;
	else if (j == 0)
		j = 1;
	else if (is_f == 1)
		j--;
	return (j);
}

int is_char(char *str)
{
	if (strlen(str) == 1 && isdigit(*str))
		return (-1);
	if (strlen(str) != 1 && std::isprint(*str))
		return (-1);
	std::cout << "CHAR : " << static_cast<char>(*str) << std::endl;
	std::cout << "INT : " << static_cast<int>(*str) << std::endl;
	std::cout << std::setprecision(1) << std::fixed << "FLOAT : " << static_cast<float>(*str) << "f" << std::endl;
	std::cout << std::setprecision(1) << std::fixed << "DOUBLE : " << static_cast<double>(*str) << std::endl;
	return (0);

}

void is_str(const char *str)
{
	int i_str = 0;
	int i = 0;

	while (str[i])
	{
		if (isalpha(str[i]))
			i_str++;
		i++;
	}

	double tmp;
	tmp = strtod(str, NULL);
	if (isnan(tmp) || isinf(tmp) || tmp == 0)
		return;
	if (i_str > 4)
		throw std::exception();
	if (i_str >= 2 && strlen(str) != i_str)
		throw std::exception();


}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		return (1);
	}
	try
	{
		is_str(av[1]);
	}
	catch (const std::exception & e)
	{
		std::cout << "CHAR : Impossible.\nINT : Impossible.\nFLOAT : Impossible.\nDOUBLE : Impossible.\n" << std::endl;
		return (0);
	}
	if (is_char(av[1]) == 0)
		return (0);

	std::string temp = av[1];
	double	d;
	int		idx_dec = 0;
	int 	idx = 0;

	d = std::atof(temp.c_str());
	idx = nb_len(idx, av[1]);
	idx_dec = dec_len(idx, idx_dec, av[1]);

	if (d < CHAR_MIN || d > CHAR_MAX || isnan(d) || isinf(d))
		std::cout << "CHAR : Impossible." << std::endl;
	else if (std::isprint(d))
		std::cout << "CHAR : '" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "CHAR : can't display." << std::endl;

	if (d < INT_MIN || d > INT_MAX || isnan(d) || isinf(d))
		std::cout << "INT : Impossible." << std::endl;
	else
		std::cout << "INT : " << static_cast<int>(d) << std::endl;

	std::cout << std::setprecision(idx_dec) << std::fixed << "FLOAT : " << static_cast<float>(d) << "f" << std::endl;
	std::cout << std::setprecision(idx_dec) << std::fixed << "DOUBLE : " << d << std::endl;

	return (0);
}
