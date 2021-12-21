/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:15:03 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/21 14:17:15 by vfurmane         ###   ########.fr       */
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

	delete personnage;
	return 0;
}
