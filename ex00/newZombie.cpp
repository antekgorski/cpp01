/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:42:38 by agorski           #+#    #+#             */
/*   Updated: 2025/04/13 18:09:04 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *PtrZombie = new Zombie(name);
    //Zombie *PtrZombie = new Zombie();
    //PtrZombie->setName(name);
    //(*PtrZombie).setName(name);
    return (PtrZombie);
}