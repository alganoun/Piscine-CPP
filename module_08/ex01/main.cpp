/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:40:05 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/29 17:46:50 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	std::cout << "=================== TEST SP1 ===================" << std::endl;
	Span sp1 = Span(5);
	sp1.addNumber(5);
	sp1.addNumber(3);
	sp1.addNumber(17);
	sp1.addNumber(9);
	sp1.addNumber(11);
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << "\n" << std::endl;
	std::cout << "=================== TEST SP2 ===================" << std::endl;
	Span sp2 = Span(10000);
	sp2.addNumber(13, 10012);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << "\n" << std::endl;
	std::cout << "=================== TEST ERRORS ===================" << std::endl;
	try
	{
		Span sp_error1 = Span(5);
		sp1.addNumber(5);
		sp1.addNumber(5);
		sp1.addNumber(5);
		sp1.addNumber(5);
		sp1.addNumber(5);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << "\n" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp_error1 = Span(5);
		sp_error1.addNumber(5);
		sp_error1.addNumber(5);
		sp_error1.addNumber(5);
		sp_error1.addNumber(5);
		sp_error1.addNumber(5);
		std::cout << sp_error1.shortestSpan() << std::endl;
		std::cout << sp_error1.longestSpan() << "\n" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp_error2 = Span(5);
		sp_error2.addNumber(2);
		std::cout << sp_error2.shortestSpan() << std::endl;
		std::cout << sp_error2.longestSpan() << "\n" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
