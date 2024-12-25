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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
int main (){
   try {
      Bureaucrat b("Ms3od",1);
      ShrubberyCreationForm a("waaaalo");
      RobotomyRequestForm w("Wolili");
      RobotomyRequestForm e("Woi");
      RobotomyRequestForm z("Woli");

      a.execute(b);
      w.execute(b);
      e.execute(b);
      z.execute(b);
   }
   catch (const std::exception &e){
      std::cout << e.what() << std::endl ;
   }
};