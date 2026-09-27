/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MegaPhone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:18:15 by helfayez          #+#    #+#             */
/*   Updated: 2026/09/27 10:49:21 by helfayez         ###   ########.fr       */
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

for(int i = 1; argc > i; i++)
{
    std::string str= argv[i];
    for(size_t j = 0; str.length() > j; j++)
    {
        std::cout << (char)toupper(str[j]);
    }
}
std::cout << std::endl;
return 0;
}