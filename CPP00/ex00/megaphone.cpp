/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:15:38 by mmaghri           #+#    #+#             */
/*   Updated: 2024/07/03 18:43:06 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void function_convert_to_upper(std::string &string)
{
    for (size_t i = 0; i < string.length(); i++)
        string[i] = toupper(string[i]);
    std::cout << string;
}
int main(int ac, char **av)
{
    std::string string = "LOUD AND UNBEARABLE FEEDBACK NOISE\n";
    std::string cast ;
    if (ac == 1)
    {
        std::cout << string;
        return 0;
    }
    for (int i = 1; i < ac; i++)
    {
        cast = av[i];
        function_convert_to_upper(cast);
    }
}