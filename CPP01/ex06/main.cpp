/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:15:26 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/26 11:28:02 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2){
        std::cout << "Invalid Argument ..!" << std::endl ;
        return (0);
    }
    Harl harl ;
    harl.complain(argv[1]);
    return (0);
}