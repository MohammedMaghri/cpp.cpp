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
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

void leack(){
   system("leaks Bureaucrat ");
}
int main (){

   atexit(leack);

   AForm *a = NULL ;
   try {
      Intern value;
      a = value.makeForm("ShrubberyCreationForm" , "tonanoo");
       Bureaucrat val("ms3od",145);
       if (a)
            a->execute(val);
         delete a;
   }
   catch (const std::exception &e) {
      std::cout << e.what() << std::endl ;
      delete a;
   }
};