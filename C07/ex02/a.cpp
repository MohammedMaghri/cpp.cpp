/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:54:48 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/30 17:27:51 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
    Array<int> a(2) ;
    Array<int> c(a);
    try {
        std::cout << a[1] << std::endl ;
        std::cout << c[1] << std::endl ;
    } catch (std::exception &e){
        std::cout << e.what() << std::endl ;
    }
    return 0;
};