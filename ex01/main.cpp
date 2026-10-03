/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:21:53 by helfayez          #+#    #+#             */
/*   Updated: 2026/10/02 23:38:00 by helfayez         ###   ########.fr       */
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
            phoneBook.addContact();
        else if(command == "SEARCH")
            phoneBook.searchContact();
        else if(command == "EXIT")
            break;
    }
    return 0;
}
