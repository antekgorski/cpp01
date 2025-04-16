/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:12:12 by agorski           #+#    #+#             */
/*   Updated: 2025/04/16 11:55:25 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
:  _name(name), _weapon(weapon) {}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}
