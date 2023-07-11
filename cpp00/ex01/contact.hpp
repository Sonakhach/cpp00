#include <iostream>
#include <string>

class   Contact
{
    public:
        Contact(void);
        ~Contact(void);
        std::string	get_m_first_name(void) const;
		std::string	get_m_last_name(void) const;
		std::string	get_m_nickname(void) const;
		std::string	get_m_phone_number(void) const;
		std::string	get_m_darkest_secret(void) const;
		void		set_m_first_name(std::string str);
		void		set_m_last_name(std::string str);
		void		set_m_nickname(std::string str);
		void		set_m_phone_number(std::string str);
		void		set_m_darkest_secret(std::string str);
    private:
        std::string m_first_name;
        std::string m_last_name;
        std::string m_nickname;
        std::string m_phone_number;
		std::string m_darkest_secret;

};