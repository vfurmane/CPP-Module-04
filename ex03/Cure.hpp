/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 20:52:49 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/16 20:54:35 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		~Cure(void);
		Cure(const Cure &obj);

		Cure	&operator=(const Cure &rhs);

		virtual AMateria	*clone(void) const;
};

#endif
