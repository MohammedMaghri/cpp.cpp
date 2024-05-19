/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:50:56 by mmaghri           #+#    #+#             */
/*   Updated: 2024/05/19 11:44:11 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Phonenumbers
{
    public : 
        int     index_id;
        std::string name;
        std::string lastname;
        std::string nickname ;
        
};

Phonenumbers function_pass_phones(Phonenumbers table, std::string first_name, int index, std::string last_name ,std::string nick_name)
{
    table.index_id = index;
    table.name = first_name;
    table.lastname = last_name;
    table.nickname = nick_name;
    return (table);
}

int function_compare(std::string compare, std::string to_compare)
{
    int index = 0;

    while (compare[index])
    {
        if (compare[index] != to_compare[index])
            return (-1);
        index++ ;
    }
    return (0);
}

std::string function_fill_form(std::string to_fill, std::string messge)
{
    int flag = 0;
    while (flag == 0)
    {
        std::cout << messge ;
        std::getline(std::cin, to_fill);
        if (to_fill.length() > 1)
            flag = 1;
    }
    return (to_fill);
}
void add_herer(Phonenumbers table[], int index)
{
    std::cout << index << std::endl;
   table[index].index_id = index;
   table[index].name =  function_fill_form(table[index].name, "Name :");
   table[index].nickname =  function_fill_form(table[index].nickname,  "Nick Name :");
   table[index].lastname =  function_fill_form(table[index].nickname,  "Last Name :");
}
void function_check_excute(Phonenumbers table[], std::string compare)
{
    int index;
    std::string element[3];
    static int memeber = 0;
    element[0] = "ADD";
    element[1] = "SEARCH";
    element[2] = "EXIT";
    if (compare.length() > 6)
    {
        std::cout << "discard" << std::endl;
        return;
    }
    else if (compare.length() == 3 && function_compare(compare, element[0]) == 0)
    {
        std::cout << "element will be added" << std::endl;
        add_herer(table, memeber);
        memeber++ ;
        if (memeber == 8)
        {
            std::cout << "ADDED 8 " << std::endl;
            memeber = 0;
        }
    }
    else if (compare.length() == 6 && function_compare(compare, element[1]) == 0)
    {
        std::cout << "We will search For the element ..." << std::endl;
    }
    else if (compare.length() == 4 && function_compare(compare, element[2]) == 0)
            exit(0);
    else
    {
        std::cout << "Discard" << std::endl;
    }
}

void function_check_out_put(std::string output)
{
    std::cout << output << std::endl;
}

int main(int argc, char **argv)
{
    std::string var;
    int         index;

    index = 0;
    
    Phonenumbers table[8] ;
    int number ;

    while (1)
    {
        std::cout << "Write an Option" << std::endl;
        std::getline(std::cin, var);
        function_check_excute(table, var);
        number = 0;
        var = '\0';
    }
    return (0);
}