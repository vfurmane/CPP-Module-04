/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:37:56 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/15 11:58:40 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define ANIMALS_NUMBER 4

int	main(void)
{
	if (ANIMALS_NUMBER < 4)
	{
		std::cout << "There must be at least 4 animals for the program to work properly..." << std::endl;
		return 1;
	}
	Animal	*animals[ANIMALS_NUMBER];
	for (int i = 0; i < ANIMALS_NUMBER; i++)
	{
		if (i < ANIMALS_NUMBER / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		animals[i]->makeSound();
		std::cout << "-----" << std::endl;
	}

	Dog	*dog1 = (Dog*)animals[0];
	Dog	*dog2 = (Dog*)animals[1];
	dog1->giveIdea("I should eat that sausage", 0);
	dog2->giveIdea("I want to sleep", 0);
	dog1->tellIdea(0);
	dog2->tellIdea(0);

	for (int i = 0; i < ANIMALS_NUMBER; i++)
	{
		std::cout << "=====" << std::endl;
		delete animals[i];
	}

	//Animal	animal;
	return 0;
}
