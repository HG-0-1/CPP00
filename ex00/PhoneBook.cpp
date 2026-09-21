#include <cctype>
#include <iostream>
int main()
{
std::string str;
std::getline(std::cin, str);
for(int i = 0; str.length() > i;i++)
{
str[i] = (char)toupper(str[i]);
}
std::cout << str;

}