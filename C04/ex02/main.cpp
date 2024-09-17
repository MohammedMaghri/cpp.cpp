/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:31:06 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/15 15:34:59 by mmaghri          ###   ########.fr       */
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
    for (int i = 0; i <= 100; i++){
        if (i % 2 == 0)
            Cat a;
        else
            Dog b;
    };
    return 0;
}