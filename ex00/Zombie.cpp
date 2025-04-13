/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:42:32 by agorski           #+#    #+#             */
/*   Updated: 2025/04/13 18:04:28 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "";
}

Zombie::Zombie(string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    cout << this->name << " : I am dead..." << endl;
}

void Zombie::annouce(void)
{
    cout << this->name << " : BraiiiiiiinnnzzzZ..." << endl;
}

void Zombie::setName(string name)
{
    this->name = name;
}
