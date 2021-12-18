/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:15:03 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/18 18:48:20 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"

int	main(void)
{
	AMateria	*glacon = new Ice();
	AMateria	*remede = new Cure();
	AMateria	*neige = glacon->clone();

	delete neige;
	delete glacon;
	delete remede;
	return 0;
}
