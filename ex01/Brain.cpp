/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:34:00 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/14 12:34:01 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain is created." << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain is destroyed." << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain is copied." << std::endl;
	*this = obj;
}

Brain		&Brain::operator=(const Brain &rhs)
{
	std::cout << "Brain is assigned." << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return *this;
}

const std::string	&Brain::getIdea(int index) const
{
	return this->_ideas[index];
}

void	Brain::setIdea(const std::string &idea, int index)
{
	this->_ideas[index] = idea;
}
