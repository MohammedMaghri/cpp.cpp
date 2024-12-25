/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:10:05 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/04 16:52:53 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

int main( void ) {
    Point p1(2, 4);
    Point p2(0, 0);
    Point p3(4, 0);
    Point po(1, 2);

    if (bsp(p1, p2, p3, po))
        std::cout << "point Inside the Triangle !" << std::endl;
    else 
        std::cout << "point Outside the Triangle !" << std::endl;
    return 0;
}