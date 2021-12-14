/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:39:26 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/12 12:41:24 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal &obj);

		Animal			&operator=(const Animal &rhs);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;

	protected:
		std::string		_type;
};

#endif
