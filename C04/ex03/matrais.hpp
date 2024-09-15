/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrais.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:31:42 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/15 17:44:42 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class matrais {
    private :
        std::string type; 
    public :
        matrais();
        matrais(const matrais& target);
        matrais& operator= (const matrais& target);
        ~matrais();
        std::string const & getType() const;
        virtual matrais* clone() const = 0;
        // virtual void use(ICharacter& target);
};