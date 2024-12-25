/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:52:19 by mmaghri           #+#    #+#             */
/*   Updated: 2024/07/04 17:09:21 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string Phonebook::function_read_element(std::string string)
{
    std::string variable;
    std::cout << string;
    std::getline(std::cin, variable);
    if (std::cin.eof())
        exit (1);
    return variable;
}

std::string Phonebook::turn_it(std::string text)
{
    std::string thistest;
    while (thistest.length() == 0)
        thistest = function_read_element(text);
    return (thistest);
}

int Phonebook::digit_check(std::string text)
{
    int index = 0;
    if (text[index] =='\0')
        return (-1);
    while (text[index])
    {
        if (isdigit(text[index]) == 0)
            return (-1);
        index++; 
    }
    return (1);
}

int check_white_space(std::string string)
{
    for (int index = 0; string[index]; index++)
        if (isspace(string[index]) == 0)
            return (-1);
    return (1);
}

std::string function_only_correct(std::string messge)
{
    Phonebook phone;
    std::string element;
    while (1)
    {
        element = phone.turn_it(messge);
        if (check_white_space(element) == -1)
            break;
    }
    return (element);
}

void Phonebook::phill_element(Phonebook& phones, int& index)
{
    if (index == 8)
        index = 0;
    phones.contacts[index].set_firstname(function_only_correct("Enter Firstname\n"));
    phones.contacts[index].set_lastname(function_only_correct("Enter Lastname\n"));
    phones.contacts[index].set_nickname(function_only_correct("Enter Nickname\n"));
    phones.contacts[index].set_darkest_sicret(function_only_correct("Enter Darkest Sicret\n"));
    while (1)
    {
        phones.contacts[index].set_phone_number(function_only_correct("Enter Phone Number\n"));
        if (digit_check(phones.contacts[index].get_phone_number()) == 1)
            break;
    }
    index++ ;
}
void Phonebook::search_with_index(Phonebook& phones, int index)
{
    std::cout << phones.contacts[index].get_firstname() << std::endl;
    std::cout << phones.contacts[index].get_lastname() << std::endl;
    std::cout << phones.contacts[index].get_nickname() << std::endl;
    std::cout << phones.contacts[index].get_phone_number() << std::endl;
    std::cout << phones.contacts[index].get_darkest_sicret() << std::endl;
}

void Phonebook::print_phone_books(Phonebook& phones, int& max_value)
{
    int index = 0;
    std::cout << "--------------------------------------" << std::endl ;
    std::cout << " Id  |Firstname | Lastname | Nickname |" << std::endl ;
    std::cout << "--------------------------------------" << std::endl ;
    while (index < 8)
    {
        if (phones.contacts[index].get_firstname().length() != 0)
        {
            std::cout << std::setw(3) << index ;
            if (phones.contacts[index].get_firstname().length() < 10)
                std::cout <<  "|"  << std::setw(10) << phones.contacts[index].get_firstname() ;
            else
                std::cout <<  "|" << std::setw(10) << phones.contacts[index].get_firstname().substr(0, 9) << ".";
            if (phones.contacts[index].get_lastname().length() < 10)
                std::cout  << "|"  << std::setw(10) << phones.contacts[index].get_lastname();
            else
                std::cout <<  "|"  << std::setw(10) << phones.contacts[index].get_lastname().substr(0, 9) << ".";
            if (phones.contacts[index].get_nickname().length() < 10)
                std::cout  << "|"  << std::setw(10) << phones.contacts[index].get_nickname();
            else
                std::cout  << "|" << std::setw(10) << phones.contacts[index].get_nickname().substr(0, 9) << ".";
            if (index == 7)
                break;
            std::cout << std::endl ;
            index++ ;
        }
        else 
            break ;
    }
    (void)max_value;
    std::cout << std::endl ;
    std::string value ;
    value = function_read_element("Enter and index ");
    if (digit_check(value) == -1)
        std::cout << "Only Degits ... && the Index Must be less then 8 : " ;
    while (digit_check(value) == -1 || value.length() != 1)
    {
        value = function_read_element("Enter and index ");
        std::cout << "Only Degits ... && the Index Must be less then 8 : " << std::endl ; 
    }
    std::cout << std::endl ;
    if (std::stoi(value) < 8)
    {
        if (phones.contacts[std::stoi(value)].get_firstname().length() == 0)
        {
            std::cout << "No contact with this index" << std::endl ;
            return ;
        }
        std::cout << phones.contacts[std::stoi(value)].get_firstname() << std::endl ;
        std::cout << phones.contacts[std::stoi(value)].get_lastname() << std::endl ;
        std::cout << phones.contacts[std::stoi(value)].get_nickname() << std::endl ;
        std::cout << phones.contacts[std::stoi(value)].get_darkest_sicret() << std::endl ;
        std::cout << phones.contacts[std::stoi(value)].get_phone_number() << std::endl ;
    }
    else
        std::cout << "Out of range" << std::endl ;
}

int main()
{
    Phonebook phones;
    int index = 0;
    std::string read ;
    while (1)
    {
        read = phones.turn_it(" @ Enter a command >: ");
        if (read == "ADD")
            phones.phill_element(phones, index);
        if (read == "EXIT" || std::cin.eof())
            exit(1);
        if (read == "SEARCH")
            phones.print_phone_books(phones, index);
    }
}