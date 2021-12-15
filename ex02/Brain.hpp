/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:07:42 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/14 12:34:07 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &obj);

		Brain				&operator=(const Brain &rhs);

		const std::string	&getIdea(int index) const;
		void				setIdea(const std::string &idea, int index);

	private:
		std::string	_ideas[100];
};

#endif
