/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:33:54 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 14:21:07 by gothmane         ###   ########.fr       */
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
		Bureaucrat(std::string name, int grade);
		Bureaucrat& operator=(const Bureaucrat &b);
		int getGrade() const;
		void setGrade(int grade);
		const std::string getName() const;
		void incrementGrade();
		void decrementGrade();
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	} high_ex;

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	} low_ex;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &b);
