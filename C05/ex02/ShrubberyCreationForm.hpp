/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:59:55 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/22 21:30:19 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class AForm;

class ShrubberyCreationForm : public AForm {
    private :
        std::string target ;
    public :
        std::string Get_target();
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string& value);
        ShrubberyCreationForm(const ShrubberyCreationForm& value);
        ShrubberyCreationForm& operator= (const ShrubberyCreationForm& value);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor);
        std::string functionDrawThree();
        class CatchError : public std::exception {
            public :
                const char *what() const throw() ;
        };
};