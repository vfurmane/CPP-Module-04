/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:15:03 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/21 17:08:58 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void)
{
	int	*ptr = NULL;
	delete ptr;
	Character	*personnage = new Character("Asterix");

	personnage->equip(new Ice());
	personnage->use(0, *personnage);
	// personnage->unequip(0); // -> leaks

	AMateria	*glacon = new Ice();
	AMateria	*neige = glacon->clone();
	std::cout << glacon->getType() << std::endl;
	std::cout << neige->getType() << std::endl;
	delete neige;
	delete glacon;

	delete personnage;
	return 0;
}
