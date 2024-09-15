/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:31:06 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/14 21:22:03 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void functionLeack(){
    system("leaks Poly");
};

int main()
{
    atexit(functionLeack);
    Dog b;
    for (int i = 0; i <= 100; i++){
        if (i % 2 == 0)
            Cat a;

    };
    return 0;
}