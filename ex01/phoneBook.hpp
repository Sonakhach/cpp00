#include "contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>


class Phonebook
{
private:
    Contact m_contacts[8];
    int checkError(std::string str);
    int checkErrorNum(std::string str);
    int m_index;   
public:
    Phonebook();
    ~Phonebook();
    void    add(void);
    void    search(void);
   
};
