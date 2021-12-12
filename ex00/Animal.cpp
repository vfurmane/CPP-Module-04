/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:41:20 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/12 11:25:15 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Animal is created." << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal is destroyed." << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal is copied." << std::endl;
	*this = obj;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal is assigned." << std::endl;
	this->_type = rhs._type;
	return *this;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal *inaudible noises*" << std::endl;
}
