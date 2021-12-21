/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 20:53:20 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/21 11:08:26 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria()
{
	this->_type = "cure";
}

Cure::~Cure(void)
{
}

Cure::Cure(const Cure &obj) : AMateria()
{
	*this = obj;
}

Cure	&Cure::operator=(const Cure &rhs)
{
	this->_type = rhs._type;
	return *this;
}

AMateria	*Cure::clone(void) const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
