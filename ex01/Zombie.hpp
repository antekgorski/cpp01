/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:41:25 by agorski           #+#    #+#             */
/*   Updated: 2025/04/14 12:37:38 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string name;
    
    public:
    Zombie();
    ~Zombie();
    void setName(std::string name);
    void annouce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif