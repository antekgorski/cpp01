/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:15:01 by agorski           #+#    #+#             */
/*   Updated: 2025/04/14 14:10:34 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::setw;

// string pointer is a pointer like c in c++
// it points to the first character of the string

// string reference is alias to the string variable
// it is not a pointer, but a reference to the string variable
// red dont coppy the argument it is faster?
int main()
{
    std::string string = "HI THIS IS BRAIN";
    
    std::string *stringPTR = &string;
    std::string& stringREF = string;

    cout << setw(30) << "string ADDRESS : " << &string << std::endl;
    cout << setw(30) << "stringPTR HELD ADDRESS : " << stringPTR << std::endl;
    cout << setw(30) << "stringREF HELD ADDRESS : " << &stringREF << std::endl;
    cout << std::endl;
    cout << setw(30) << "string VALUE : " << string << std::endl;
    cout << setw(30) << "stringPTR POINTED VALUE : " << *stringPTR << std::endl;
    cout << setw(30) << "stringREF POINTED VALUE : " << stringREF << std::endl;
}
