/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:05:22 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/21 14:14:17 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("amateria")
{
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(const AMateria &obj)
{
	*this = obj;
}

AMateria::AMateria(const std::string &type) : _type(type)
{
}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	this->_type = rhs._type;
	return *this;
}

const std::string	&AMateria::getType(void) const
{
	return this->_type;
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << "* but nothing happened *" << std::endl;
}
