/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:22:21 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/20 18:03:41 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
private:
	std::string const name;
	bool _signed;
	int sign_grade;
	int exec_grade;
	Form();
public:
	Form(std::string const &name, int sign, int exec);
	Form(Form const &copied);
	virtual ~Form();

	class	GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class	GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

	Form &operator=(Form const &rhs);

	std::string const &getName() const;
	bool	getSigned() const;
	int		getSignGrade() const;
	int		getExecGrade() const;

	void	beSigned(Bureaucrat const &b);
};

std::ostream &operator<<(std::ostream &out, Form const &tmp);

#endif
