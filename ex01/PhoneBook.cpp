/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 14:16:11 by helfayez          #+#    #+#             */
/*   Updated: 2026/10/04 21:15:13 by helfayez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
PhoneBook::PhoneBook()
{
    index = 0;
}
std::string PhoneBook::GetInput(std::string prompt)
{
    std::string input;
    std::cout << prompt <<": ";
    std::getline(std::cin, input);
    while(input.empty() && std::cin.good())
    {
        std::cout << "is empty. try agin: ";
        std::getline(std::cin, input);
    }
    return input;
}
void PhoneBook::AddContact()
{
    int i = index % 8;
    std::cout << "add new contact" << std::endl;
    contacts[i].SetFirstName(GetInput("First name"));
    contacts[i].SetLastName(GetInput("Last name"));
    contacts[i].SetNickName(GetInput("Nickname"));
    contacts[i].SetPhoneNumber(GetInput("Phone Number"));
    contacts[i].SetDarkestSecret(GetInput("Darkest Secret"));
    
    std::cout << "Contact added successfully!" << std::endl;
    index++;
}
