/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:44:33 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/21 18:02:31 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# define SOURCES_SIZE 4

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(const MateriaSource &obj);

		MateriaSource		&operator=(const MateriaSource &rhs);

		virtual void 		learnMateria(AMateria *m);
		virtual AMateria	*createMateria(const std::string &type);

	private:
		AMateria	*_sources[SOURCES_SIZE];
};

#endif
