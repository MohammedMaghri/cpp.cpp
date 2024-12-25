#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>


class Contact
{
    private:
        std::string firstname ;
        std::string lastname ;
        std::string nickname ;
        std::string phone_number ;
        std::string darkest_sicret ;
    public:
        std::string get_firstname() const { return firstname; }
        std::string get_lastname() const { return lastname; }
        std::string get_nickname() const { return nickname; }
        std::string get_phone_number() const { return phone_number; }
        std::string get_darkest_sicret() const { return darkest_sicret; }
        void set_firstname(std::string first) { firstname = first; }
        void set_lastname(std::string last) { lastname = last; }
        void set_nickname(std::string nick) { nickname = nick; }
        void set_phone_number(std::string phone) { phone_number = phone; }
        void set_darkest_sicret(std::string dark) { darkest_sicret = dark; }
};

#endif