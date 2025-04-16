/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:11:37 by agorski           #+#    #+#             */
/*   Updated: 2025/04/15 15:05:07 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType()
{
    return(this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
