#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
    private:
        Contact contacts[8];
        int index;
        std::string GetInput(std::string prompt);
        std::string FormatString(std::string str);

    public:
        PhoneBook();
        void AddContact();
        void SearchContact();
};
#endif