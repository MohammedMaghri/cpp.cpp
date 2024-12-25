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
   AForm *d = NULL ;
   try {
      Intern value;
      a = value.makeForm("robotomy request" , "tonanoo");
      d = value.makeForm("robotomy request" , "totato");
       Bureaucrat val("ms3od",1);
       if (a && d){
            a->execute(val);
            d->execute(val);
       }
         delete a;
         delete d;
   }
   catch (const std::exception &e) {
      std::cout << e.what() << std::endl ;
      delete a;
      delete d;
   }
};