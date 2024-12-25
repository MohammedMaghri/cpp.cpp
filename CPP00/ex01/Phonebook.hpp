#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include "Contact.hpp"

class Phonebook
{
    private:
        Contact contacts[8];
    public:
        void search_with_index(Phonebook& phones, int index);
        std::string turn_it(std::string text);
        int digit_check(std::string text);
        void phill_element(Phonebook& phones, int& index);
        void print_phone_books(Phonebook& phones, int& max_value);
        Phonebook *fill_form(Phonebook array[8]);
        std::string function_read_element(std::string string);
};


#endif