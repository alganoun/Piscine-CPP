/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 13:14:19 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/26 13:46:51 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class A
{
private :
	int a;
public :
	A(int a):a(a){}
	virtual ~A(){};
	int getA() const{return (this->a);}
};

std::ostream &operator<<(std::ostream &out, A const &temp)
{
	out << temp.getA();
	return (out);
}

template <typename T>
void	print_result(T &result)
{
	std::cout << result <<std::endl;
}

int main()
{
	int int_tab[8] = {0, 1, 2, 3, 4, 5, 6, 7};
	std::string string_tab[8] = {"string 0", "string 1", "string 2", "string 3", "string 4", "string 5", "string 6", "string 7"};
	A	A_tab[8] = {A(10), A(11), A(12), A(13), A(14), A(15), A(16), A(17)};

	std::cout << "Testing INT TAB :" << std::endl;
	iter(int_tab, 8,  &print_result);
	std::cout << std::endl;
	std::cout << "Testing CHAR TAB :" << std::endl;
	iter(string_tab, 8,  &print_result);
	std::cout << std::endl;
	std::cout << "Testing CLASS TAB :" << std::endl;
	iter(A_tab, 8,  &print_result);
	return (0);
}
