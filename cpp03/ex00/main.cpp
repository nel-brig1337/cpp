/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-brig <nel-brig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:58:17 by nel-brig          #+#    #+#             */
/*   Updated: 2023/01/20 17:42:19 by nel-brig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap nouha;
	// ClapTrap nouha;

	nouha.attack("khaoula");
	nouha.beRepaired(5);
	nouha.takeDamage(15);
	nouha.attack("khoula");
	nouha.beRepaired(5);
}