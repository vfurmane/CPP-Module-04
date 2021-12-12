/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:42:45 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/12 11:14:07 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog is created." << std::endl;
	this->_type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Dog is destroyed." << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog is copied." << std::endl;
	*this = obj;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog is assigned." << std::endl;
	(void)rhs; // no property need to be copied
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog barks" << std::endl;
}
