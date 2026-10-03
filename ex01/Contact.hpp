#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;

    public:
        void SetFirstName(std::string str);
        void SetLastName(std::string str);
        void SetNickName(std::string str);
        void SetPhoneNumber(std::string str);
        void SetDarkestSecret(std::string str);
        
        std::string GetFirstName() const;
        std::string GetLastName() const;
        std::string GetNickName() const;
        std::string GetPhoneNumber() const;
        std::string GetDarkestSecret() const;

}
#endif