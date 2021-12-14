/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:41:49 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/14 12:28:37 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &obj);

		Dog				&operator=(const Dog &rhs);

		virtual void	makeSound(void) const;
		void			tellIdea(int index) const;
		void			giveIdea(const std::string &idea, int index);

	private:
		Brain	*_brain;
};

#endif
