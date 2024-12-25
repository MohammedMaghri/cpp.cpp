/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:24:48 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/29 14:04:15 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void leackit(){
    system("leaks Scalar");
};
int main (){
    // atexit(leackit);
    Base *value = generate();
    (void)value ;
    Base *note = generate();
    Base &nor = *value ;

    identify(note);
    identify(nor);
    identify(value);
    delete value ;
    delete note;
    return (0);
};