/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:43:48 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/21 11:50:23 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(), _brain(new Brain())
{
	std::cout << "Cat is created." << std::endl;
	this->_type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat is destroyed." << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Cat is copied." << std::endl;
	*this = obj;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat is assigned." << std::endl;
	this->_brain = new Brain(*rhs._brain);
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat meows" << std::endl;
}
