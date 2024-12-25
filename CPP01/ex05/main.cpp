/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:28:04 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/26 11:17:19 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "harl.hpp"

int main (int argc, char **argv)
{
    Harl    harl;

    if (argc != 2){
        std::cout << "Invalid Arg" << std::endl;
        return(1);
    }
    harl.complain(argv[1]);
    return (0);
}