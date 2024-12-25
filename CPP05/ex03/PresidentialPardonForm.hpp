/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:47:06 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/22 21:52:04 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

class AForm;

class PresidentialPardonForm : public AForm {
    private :
        std::string target ;
    public :
        std::string Get_target();
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string& value);
        PresidentialPardonForm(const PresidentialPardonForm& value);
        PresidentialPardonForm& operator= (const PresidentialPardonForm& value);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor);
        std::string functionDrawThree();
        class CatchError : public std::exception {
            public :
                const char *what() const throw() ;
        };
};