#include "contact.hpp"

Contact::Contact()
{
	std::cout << "this is Contact Constructor" << std::endl;
}
Contact::~Contact(void)
{
   std::cout << "this is Contact destructor" << std::endl;
}
std::string	Contact::get_m_first_name(void) const
{
	return (this->m_first_name);
}

std::string	Contact::get_m_last_name(void) const
{
	return (this->m_last_name);
}

std::string	Contact::get_m_nickname(void) const
{
	return (this->m_nickname);
}

std::string	Contact::get_m_phone_number(void) const
{
	return (this->m_phone_number);
}

std::string	Contact::get_m_darkest_secret(void) const
{
	return (this->m_darkest_secret);
}

void	Contact::set_m_first_name(std::string str)
{
	this->m_first_name = str;
}

void	Contact::set_m_last_name(std::string str)
{
	this->m_last_name = str;
}

void	Contact::set_m_nickname(std::string str)
{
	this->m_nickname = str;
}

void	Contact::set_m_phone_number(std::string str)
{
	this->m_phone_number = str;
}

void	Contact::set_m_darkest_secret(std::string str)
{
	this->m_darkest_secret = str;
}