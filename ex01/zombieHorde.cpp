/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:40:27 by agorski           #+#    #+#             */
/*   Updated: 2025/04/14 12:34:22 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        std::cerr << "Invalid number of zombies" << std::endl;
        return (NULL);
    }
    Zombie *horde = new (std::nothrow) Zombie[N];
    if (horde == NULL)
    {
        std::cerr << "Memory allocation failed" << std::endl;
        return (NULL);
    }
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name);
    }
    return (horde);
}
