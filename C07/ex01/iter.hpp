/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:38:39 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/30 12:08:33 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void funct(T print){
    std::cout << "Print Value " << print << std::endl ;
};

template <typename T, typename L, typename F>

void iter (T *Array, L lent, F func){
    for (int i = 0; i < lent; i++){
        func(Array[i]);
    }
};