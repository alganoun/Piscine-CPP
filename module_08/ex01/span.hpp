/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 10:59:57 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/29 17:27:32 by allanganoun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
private:
	std::vector<int> *vect;
	int size;
	int index;
	Span();
public:
	Span(unsigned int N);
	Span(Span const &copied);
	virtual ~Span();
	Span	&operator=(Span const &rhs);

	class IsFull : public std::exception{
	public :
		virtual const char *what() const throw();
	};

	class NoSpan : public std::exception{
	public :
		virtual const char *what() const throw();
	};

	class Double : public std::exception{
	public :
		virtual const char *what() const throw();
	};

	void	addNumber(int to_add);
	void	addNumber(int begin, int end);
	int		shortestSpan();
	int		longestSpan();
};

#endif
