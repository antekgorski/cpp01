/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:41:08 by agorski           #+#    #+#             */
/*   Updated: 2025/04/13 18:58:07 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *heapZombie = newZombie("HeapZombie");
    heapZombie->annouce();
    delete heapZombie;
    
    Zombie stackZombie("StackZombie");
    stackZombie.annouce();
    
    randomChump("stackZombie2");
    randomChump("stackZombie3");
    return (0);
}