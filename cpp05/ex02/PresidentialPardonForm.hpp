/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:11:42 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 14:22:06 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"
#include <fstream>


class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &n);
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const &e) const;
        PresidentialPardonForm& operator=(const PresidentialPardonForm &f);
};