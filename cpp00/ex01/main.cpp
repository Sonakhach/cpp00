#include "phoneBook.hpp"

int main()
{
    Phonebook ph;
    std::string str;
    while (str != "EXIT")
    {
        std::cout << "Welcome to my phonebook. What do you want ADD, SEARCH or EXIT ? --> ";
        std::getline(std::cin, str);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            return (0);
        }
        if (str == "ADD")
            ph.add();
        else if (str == "SEARCH")
            ph.search();
    }
    return (0);
}