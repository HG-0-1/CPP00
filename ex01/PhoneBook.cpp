/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:18:15 by helfayez          #+#    #+#             */
/*   Updated: 2026/09/26 17:45:31 by helfayez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
int main(int argc, char **argv)
{
if (argc == 1)
{
    std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    return 0;
}
std::string str= argv[1];
// std::getline(std::cin, str);
for(size_t i = 0; str.length() > i; i++)
{
str[i] = (char)toupper(str[i]);
}
std::cout << str;

}