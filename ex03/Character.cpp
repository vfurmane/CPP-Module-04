/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:07:10 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/21 14:17:26 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("personnage"), _inventory()
{
}

Character::~Character(void)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		delete this->_inventory[i];
}

Character::Character(const Character &obj)
{
	*this = obj;
}

Character::Character(const std::string &name) : _name(name), _inventory()
{
}

Character	&Character::operator=(const Character &rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = rhs._inventory[i];
	}
	return *this;
}

const std::string	&Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	int	i;

	i = 0;
	while (i < INVENTORY_SIZE && this->_inventory[i] != NULL)
		i++;
	if (i >= INVENTORY_SIZE)
		return ;
	this->_inventory[i] = m;
	std::cout << "Equiped materia " << m->getType() << " at index " << i << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= INVENTORY_SIZE)
		return ;
	std::cout << "Unequiped materia " << this->_inventory[idx]->getType() << " at index " << idx << std::endl;
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}
