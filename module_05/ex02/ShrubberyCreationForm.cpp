/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 10:26:45 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/21 15:43:08 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
	Form("Shrubbery Creation", 145, 137), target(target)
{
	std::cout << "Shrubbery Creation created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copied):
	Form(copied), target(copied.target)
{
	std::cout << "Shrubbery Creation copy created." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Creation destroyed." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->target = rhs.target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::ofstream file(this->target + "_shrubbery");
	std::string list[2] =
	{
		"      /\\      \n "\
		"     /\\*\\     \n "\
		"    /\\O\\*\\    \n "\
		"   /*/\\/\\/\\   \n "\
		"  /\\O\\/\\*\\/\\  \n "\
		" /\\*\\/\\*\\/\\/\\ \n "\
		"/\\O\\/\\/*/\\/O/\\\n "\
		"      ||      \n "\
		"      ||      \n "\
		"      ||      \n",
		"      . \n "\
		"   __/ \\__\n "\
		"   \\     /\n "\
		"   /.'o'.\\\n "\
		"    .o.'.\n "\
		"   .'.'o'.\n "\
		"  o'.o.'.o.\n "\
		" .'.o.'.'.o.\n "\
		".o.'.o.'.o.'.\n "\
		"   [_____]\n "\
		"    \\___/    \n"};
	if (!file.is_open() || file.bad())
		throw Form::FileOpenException();
	srand(time(NULL));
	int j = rand() % 2;
	for (int i = 0; i < 5; i++)
	{
		file << list[j];
		if (file.bad())
		{
			file << std::endl;
			file.close();
			throw Form::FileWriteException();
		}
	}
	std::cout << "File created." << std::endl;
	file << std::endl;
	file.close();
}
