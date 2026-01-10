/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Form.hpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/09 14:42:34 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/10 14:41:38 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;
class Form{
  private:
    const std::string name;
    bool  isSigned;
    const int reqSignGrade;
    const int reqGradeToExec;

  public:
    Form();
    ~Form();
    Form(const Form& otherObj);
    Form(const std::string n, const int rsg, const int rgte);
    Form&             operator=(const Form& otherObj);

    class GradeTooHighException : public std::exception {
      public:
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
      public:
        const char* what() const throw();
    };

    void	            beSigned(Bureaucrat &bureaucrat);
    
		std::string       getName() const;
		bool              getIsSigned() const;
		int  		          getSignGrade() const;
		int 		          getExecGrade() const;
};

std::ostream	&operator<<(std::ostream &out, Form const &form);

#endif
