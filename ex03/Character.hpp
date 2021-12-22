/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:01:19 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/21 14:08:51 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# define INVENTORY_SIZE 4

# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		~Character(void);
		Character(const Character &obj);
		Character(const std::string &name);

		Character			&operator=(const Character &rhs);

		const std::string	&getName() const;
		void				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);

	private:
		std::string	_name;
		AMateria	*_inventory[INVENTORY_SIZE];
};

#endif
