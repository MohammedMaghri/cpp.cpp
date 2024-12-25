/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:02:34 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/26 10:43:09 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *brainPtr = &brain;
    std::string &brainRef = brain;

    std::cout << &brain << std::endl;
    std::cout << brainPtr << std::endl;
    std::cout << &brainRef << std::endl;
    std::cout << std::endl;
    std::cout << brain << std::endl;
    std::cout << *brainPtr << std::endl;
    std::cout << brainRef << std::endl;
}