/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 07:20:57 by alganoun          #+#    #+#             */
/*   Updated: 2021/03/23 10:03:48 by alganoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class	pony
{
	public :

	pony();
	~pony();

	void	set_age();
	void	set_weight();
	void	growing();
	void	eating();

	private :

	std::string	age;
	std::string	weight;
};

#endif
