/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 13:21:29 by helfayez          #+#    #+#             */
/*   Updated: 2026/10/06 14:57:38 by helfayez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
int main()
{

    PhoneBook phoneBook;
    std::string command;
    std::cout << "Welcome to the PhoneBook application!" << std::endl;
    while(true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command))
            break;
        if(command == "ADD")
            phoneBook.AddContact();
        else if(command == "SEARCH")
            phoneBook.SearchContact();
        else if(command == "EXIT")
            break;
    }
    return 0;
}

