/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 14:16:11 by helfayez          #+#    #+#             */
/*   Updated: 2026/10/07 13:11:48 by helfayez         ###   ########.fr       */
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
std::string PhoneBook::FormatString(std::string str)
{
    if(str.length() > 10)
        return str.substr(0,9) + ".";
    return str;
}
void PhoneBook::SearchContact()
{
    int count;
    if(index > 8)
        count = 8;
    else
        count = index;

    if(count == 0)
    {
        std::cout << "phonebook is empty, add contact first" << std::endl;
        return;
    }

    std::cout << "____________________________________" <<std::endl;

    std::cout << "|" << std::setw(10) << "index"
    << "|" << std::setw(10) << "first name"
    << "|" << std::setw(10) << "last name"
    << "|" << std::setw(10) << "nick name" 
    << "|" << std::endl;

    std::cout << "___________________________________" << std::endl;
    
    for(int i = 0; count > i ; i++)
    {
        std::cout << "|" << std::setw(10) << i
        << "|" << std::setw(10) << FormatString(contacts[i].GetFirstName())
        << "|" << std::setw(10) << FormatString(contacts[i].GetLastName())
        << "|" << std::setw(10) << FormatString(contacts[i].GetNickName()) << "|" <<std::endl;

    }
    std::cout << "___________________________________" << std::endl;

    std::string input;
    std::cout << "enter you contact to found it" << std::endl;
    std::getline(std::cin, input);

    if(input.length() == 1 && input[0] > '0' && input[0] >= ('0' + count) )
    {
        int i = input[0] - '0';
        std::cout << "first name" << contacts[i].GetFirstName() << std::endl;
        std::cout << "last name" << contacts[i].GetLastName() << std::endl;
        std::cout << "nick name" << contacts[i].GetNickName() << std::endl;
        std::cout << "phone number" << contacts[i].GetPhoneNumber() << std::endl;
        std::cout << "darkest secret" << contacts[i].GetDarkestSecret() <<std::endl;
    }
    else
    {
        std::cout << "invald number" << std::endl;
    }
}