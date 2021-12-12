/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:43:48 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/12 11:12:52 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat is created." << std::endl;
	this->_type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat is destroyed." << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Cat is copied." << std::endl;
	*this = obj;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat is assigned." << std::endl;
	(void)rhs; // no property need to be copied
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat meows" << std::endl;
}
