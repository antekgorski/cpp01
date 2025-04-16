/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:41:35 by agorski           #+#    #+#             */
/*   Updated: 2025/04/14 12:36:19 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *horde = zombieHorde(5, "cloneZombie");
    for (int i = 0; i < 5; i++)
    {
        horde[i].annouce();
    }
    delete[] horde;
    return (0);
}