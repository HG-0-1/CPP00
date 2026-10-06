/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 13:20:16 by helfayez          #+#    #+#             */
/*   Updated: 2026/10/06 13:02:52 by helfayez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::SetFirstName(std::string str)
{
    FirstName = str;
}
void Contact::SetLastName(std::string str)
{
    LastName = str;
}
void Contact::SetNickName(std::string str)
{
    NickName = str;
}
void Contact::SetPhoneNumber(std::string str)
{
    PhoneNumber = str;
}
void Contact::SetDarkestSecret(std::string str)
{
   DarkestSecret = str;
}

std::string Contact::GetFirstName() const
{
    return FirstName;
}
std::string Contact::GetLastName() const
{
    return LastName;
}
std::string Contact::GetNickName() const
{
    return NickName;
}
std::string Contact::GetPhoneNumber() const
{
    return PhoneNumber;
}
std::string Contact::GetDarkestSecret() const
{
    return DarkestSecret;
}