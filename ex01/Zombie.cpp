/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:41:29 by agorski           #+#    #+#             */
/*   Updated: 2025/04/14 12:18:30 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// default constructor
Zombie::Zombie()
{
    this->name = "";
}

// Destructor
Zombie::~Zombie()
{
    std::cout << this->name << " : I am dead..." << std::endl;
}

// Method to set the name of the zombie
void Zombie::setName(std::string name)
{
    this->name = name;
}

//Metod to announce the zombie
void Zombie::annouce(void)
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
