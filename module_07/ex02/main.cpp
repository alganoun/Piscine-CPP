/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42lyon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:19:25 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/27 02:23:46 by allanganoun      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "Array.hpp"

#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> int_tab1;
	Array<int> int_tab2;
	int_tab1 = int_tab2;
	for (int i = 0; i < int_tab1.size(); i++)
	{
		int_tab1[i] = i;
		std::cout << int_tab1[i] << " ";;
	}
	std::cout << std::endl;
	for (int i = 0; i < int_tab2.size(); i++)
		std::cout << int_tab2[i] << " ";
	std::cout << std::endl;
	Array<float> floatR(10);
	for (int i = 0; i < floatR.size(); i++)
		std::cout << floatR[i] << "f ";
	std::cout << std::endl;

	Array<std::string> stringR(5);
	for (int i = 0; i < stringR.size(); i++)
	{
		stringR[i] = std::to_string(i);
		std::cout << "String " << stringR[i];
	}
	std::cout << std::endl;
	Array<std::string> stringRR = stringR;
	for (int i = 0; i < 5; i++)
		stringRR[i] = "42";
	for (int i = 0; i < stringR.size(); i++)
		std::cout << stringR[i] << "s <> " << stringRR[i] << std::endl;

	std::cout << "---" << std::endl;

	try
	{
		int_tab2[-1] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		int_tab2[999] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);

}
