/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:19:49 by mmaghri           #+#    #+#             */
/*   Updated: 2024/05/19 11:31:40 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

void function_print(std::string stri)
{
    int index = 0;
    while (index < stri.length())
    {
        if (stri.at(index) >= 'a' && stri.at(index) <= 'z')
            stri.at(index) -= 32;
        std::cout << stri.at(index) ;
        index++ ;
    }
}
int main(int argc , char **argv)
{
    int index = 1;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (index < argc)
    {
        function_print(argv[index]);
        index++ ;
    }
    return (0);
}