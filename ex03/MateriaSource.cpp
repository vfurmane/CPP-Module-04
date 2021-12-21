/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:47:17 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/21 18:04:46 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
}

MateriaSource::~MateriaSource(void)
{
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	*this = obj;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	(void)rhs;
	return *this;
}

void 	MateriaSource::learnMateria(AMateria *m)
{
	int	i;

	i = 0;
	while (i < SOURCES_SIZE && this->_sources[i] != NULL)
		i++;
	if (i >= SOURCES_SIZE)
		return ;
	this->_sources[i] = m->clone();
	std::cout << "Saved materia " << m->getType() << " at index " << i << std::endl;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	int	i;

	i = 0;
	while (i < SOURCES_SIZE && this->_sources[i] != NULL && this->_sources[i]->getType() != type)
		i++;
	if (i >= SOURCES_SIZE)
		return NULL;
	return this->_sources[i]->clone();
}

