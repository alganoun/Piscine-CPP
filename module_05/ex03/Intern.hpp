/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:57:15 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/21 20:08:42 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	std::string list[9];
public:
	Intern();
	Intern(Intern const &copy);
	virtual ~Intern();
	class FormNotCreated : public std::exception
	{
		virtual const char *what() const throw();
	};
	Intern &operator=(Intern const &rhs);
	Form *makeform(std::string to_compare, std::string target);
};

Form *createPresential(std::string target);
Form *createRobotomy(std::string target);
Form *createShrubbery(std::string target);

#endif
