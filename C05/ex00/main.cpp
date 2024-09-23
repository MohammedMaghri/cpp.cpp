 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:41:18 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/20 10:17:37 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (){

   try {
      Bureaucrat e;
      Bureaucrat b("Wil", 1);
      b.Decrement();
      std::cout << b.getGrade() << std::endl ;
   }
   catch(const std::exception& e) {
    std::cout << e.what() << std::endl;
   }
};