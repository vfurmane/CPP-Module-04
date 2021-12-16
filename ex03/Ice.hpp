/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:05:40 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/16 20:54:30 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		~Ice(void);
		Ice(const Ice &obj);

		Ice	&operator=(const Ice &rhs);

		virtual AMateria	*clone(void) const;
};

#endif
