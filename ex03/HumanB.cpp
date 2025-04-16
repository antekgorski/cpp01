/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:12:28 by agorski           #+#    #+#             */
/*   Updated: 2025/04/16 11:56:25 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_weapon = NULL;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}
