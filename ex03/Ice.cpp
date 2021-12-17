/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:04:20 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/17 12:14:13 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
	this->_type = "ice";
}

Ice::~Ice(void)
{
}

Ice::Ice(const Ice &obj) : AMateria()
{
	*this = obj;
}

Ice	&Ice::operator=(const Ice &rhs)
{
	this->_type = rhs._type;
	return *this;
}

AMateria	*Ice::clone(void) const
{
	return new Ice(*this);
}
