/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:19:49 by mmaghri           #+#    #+#             */
/*   Updated: 2024/05/18 11:31:47 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

namespace Thistest
{
    void function_print(char *string)
    {
        int index = 0;
        while (string[index])
        {
            if (string[index] >= 'a' && string[index] <= 'z')
                string[index] -= 32;
            std::cout << string[index];
            index++ ;
        }
    }
    
}
int main(int argc , char **argv)
{
    using namespace Thistest;
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