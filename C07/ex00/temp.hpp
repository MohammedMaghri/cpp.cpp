/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:00:06 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/30 11:29:41 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>

void swap(T &a, T &b){
    T swaped ;
    swaped = a ;
    a = b ;
    b = swaped ;
};

template <typename T>

T min(T a, T b)  { 
    if (a < b)
        return (a);
    return (b);
};

template <typename T>

T max(T a, T b)  {
    if (a > b)
        return (a);
    return (b);
};