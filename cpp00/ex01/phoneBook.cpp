#include "phoneBook.hpp"

Phonebook::Phonebook()
{
    this->m_index = 0;
    std::cout << "Created an empty phonebook for up to 8 contacts" << std::endl;
    
}
Phonebook::~Phonebook()
{
    std::cout << "this is Phonebook destructor" << std::endl;
}

void Phonebook::add()
{
    std::string str;
    str = "";
    if (this->m_index > 7)
        std::cout << "Warning: overwriting info about " << this->m_contacts[this->m_index % 8].get_m_first_name() << std::endl;
    while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter a first name: ";
		if (std::getline(std::cin, str) && str != "")
        {
            if (checkError(str) == 1)     
                return;
            this->m_contacts[this->m_index % 8].set_m_first_name(str);
        }
	}
    str = "";
    while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->m_contacts[this->m_index % 8].get_m_first_name() << "'s last name: ";
		if (std::getline(std::cin, str) && str != "")
        {
             if (checkError(str) == 1)     
                return;
			this->m_contacts[this->m_index % 8].set_m_last_name(str);
        }
	}
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout << "Enter" << this->m_contacts[this->m_index % 8].get_m_first_name() << "'s nick name: " ;
        if (getline(std::cin, str) && str != "")
            this->m_contacts[this->m_index % 8].set_m_nickname(str); 
    }
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout << "Enter" << this->m_contacts[this->m_index % 8].get_m_first_name() << "'s phone number: " ;
        if (std::getline(std::cin, str) && str != "")
        {
            if (checkErrorNum(str) == 1)
            {
                std::cout << "ERROR, enter valid number" << std::endl;
                return;
            }     
            this->m_contacts[this->m_index % 8].set_m_phone_number(str); 
        }
    }
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout << "Enter" << this->m_contacts[this->m_index % 8].get_m_darkest_secret() << "'s darkest_secret: " ;
        if (std::getline(std::cin, str) && str != "")
            this->m_contacts[this->m_index % 8].set_m_darkest_secret(str); 
    }
    this->m_index++;
}

std::string checkLengt(std::string str)
{
    std::string s;
    if (str.size() > 10)
      { 
        s = str.substr( 0, 9) + ".";
        return (s);
      }
    return (str);
}

void	Phonebook::search(void)
{
    int i = 0;
    std::string str; 
    int num = 0;
    std::stringstream ss; 

    if (m_contacts[i].get_m_first_name() == "")
        std::cout << "PHonebook is empty!" << std::endl;
    std::cout << "|" << std::setw(10) << "INDEX"
    << "|" << std::setw(10) << "FIRST NAME" 
    << "|" << std::setw(10) << "LAST NAME"
    << "|" << std::setw(10) << "NICK NAME"   
    << "|" << std::endl;
    while (i < 8)
    {
        if (m_contacts[i].get_m_first_name() != "")
        {
            std::cout << "|" << std::setw(10) << i << "|" << 
            std::setw(10) << checkLengt(m_contacts[i].get_m_first_name()) 
            << "|" << std::setw(10) << checkLengt(m_contacts[i].get_m_last_name())
            << "|" << std::setw(10) << checkLengt(m_contacts[i].get_m_nickname()) 
            << "|" << std::endl;
        }
        i++;
    }
    std::cout << "please enter ID -> ";
    std::getline(std::cin,str);
    ss << str;
    ss >> num;
    if (str == "")
        return ;
    if (checkErrorNum(str)  || !(num >= 0 && num <= 7))
    {
        std::cout << "enter valid ID" << std::endl;
        return ;
    }
    else
    {
        std::cout << "first_name -> " << this->m_contacts[num].get_m_first_name() << std::endl;
        std::cout << "last_name -> " << this->m_contacts[num].get_m_last_name() << std::endl;
        std::cout << "nick_name -> " << this->m_contacts[num].get_m_nickname() << std::endl;
        std::cout << "phone_number -> " << this->m_contacts[num].get_m_phone_number() << std::endl;
        std::cout << "darkestsecret -> " << this->m_contacts[num].get_m_darkest_secret() << std::endl;
        
    }
}

int Phonebook::checkError(std::string str)
{
    int i = 0;

    while (str[i])
    {
        if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z'))
            {
                std::cout << "ERROR , enter valid argument" << std::endl;
                return (1);
            }
        i++;
    }
    return (0);
}

int Phonebook::checkErrorNum(std::string str)
{
    int i = 0;

    while (str[i])
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return (1);
        i++;
    }
    return (0);
}
