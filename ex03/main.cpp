/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:15:03 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/21 18:05:51 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	// Leaks
	// ICharacter *alice = new Character(*(Character *)me);
	// alice->unequip(1);
	// me->use(1, *bob);
	// alice->use(0, *bob);
	// delete alice;

	delete bob;
	delete me;
	delete src;

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
