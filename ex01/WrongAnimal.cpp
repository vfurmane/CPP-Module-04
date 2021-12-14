/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 12:46:37 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/12 12:47:38 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal is created." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal is destroyed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal is copied." << std::endl;
	*this = obj;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal is assigned." << std::endl;
	this->_type = rhs._type;
	return *this;
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal *inaudible noises*" << std::endl;
}
