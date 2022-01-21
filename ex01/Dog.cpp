/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:42:45 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/21 11:50:06 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(), _brain(new Brain())
{
	std::cout << "Dog is created." << std::endl;
	this->_type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Dog is destroyed." << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog is copied." << std::endl;
	*this = obj;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog is assigned." << std::endl;
	this->_brain = new Brain(*rhs._brain);
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog barks" << std::endl;
}

void	Dog::tellIdea(int index) const
{
	std::cout << this->_brain->getIdea(index) << std::endl;
}

void	Dog::giveIdea(const std::string &idea, int index)
{
	this->_brain->setIdea(idea, index);
}
