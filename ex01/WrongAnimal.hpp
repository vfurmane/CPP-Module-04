/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 12:40:30 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/12 12:48:39 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		virtual ~WrongAnimal(void);
		WrongAnimal(const WrongAnimal &obj);

		WrongAnimal	&operator=(const WrongAnimal &rhs);

		std::string	getType(void) const;
		void		makeSound(void) const;

	protected:
		std::string	_type;
};

#endif
