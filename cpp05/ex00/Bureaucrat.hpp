/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:33:54 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/12 09:58:55 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream>


class Bureaucrat
{
private:
    const std::string name; // gotta be const
    int grade;

public:
    Bureaucrat();
    Bureaucrat(Bureaucrat &b);
    ~Bureaucrat();
    // Bureaucrat &operator=(Bureaucrat &b);
    Bureaucrat(std::string name, int grade);
    Bureaucrat& operator=(const Bureaucrat &b);
    int getGrade() const;
    void setGrade(int grade);
    const std::string getName() const;
    void incrementGrade();
    void decrementGrade();
    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw()
        {
            return "\033[1;31mGradeTooHighException\033[0m";
        }
    } high_ex;

    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw()
        {
            return "\033[1;33mGradeTooLowException\033[0m";
        }
    } low_ex;
};

std::ostream& operator<<(std::ostream& os, Bureaucrat &b);