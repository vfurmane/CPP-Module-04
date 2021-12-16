/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:15:47 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/16 21:00:18 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class ICharacter;

class AMateria
{
	public:
		AMateria(void);
		virtual ~AMateria(void);
		AMateria(const AMateria &obj);
		AMateria(const std::string &type);

		AMateria			&operator=(const AMateria &rhs);

		const std::string	&getType(void) const;

		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);

	protected:
		std::string	_type;
};

#endif
