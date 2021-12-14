/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 12:42:11 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/12 12:46:27 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat is created." << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat is destroyed." << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	std::cout << "WrongCat is copied." << std::endl;
	*this = obj;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat is assigned." << std::endl;
	(void)rhs; // no property need to be copied
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat meows" << std::endl;
}
