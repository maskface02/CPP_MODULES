/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   AForm.hpp                                            :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/09 14:42:34 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/12 17:23:45 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class AForm {
  private:
    const std::string name;
    bool  isSigned;
    const int reqSignGrade;
    const int reqGradeToExec;

  protected:
    virtual void executeFormAction() const=0; 

  public:
    AForm();
    virtual ~AForm();
    AForm(const AForm& otherObj);
    AForm(const std::string n, const int rsg, const int rgte);
    AForm&             operator=(const AForm& otherObj);

    class GradeTooHighException : public std::exception {
      public:
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
      public:
        const char* what() const throw();
    };

		std::string       getName() const;
		bool              getIsSigned() const;
		int  		          getSignGrade() const;
		int 		          getExecGrade() const;

    void	            beSigned(const Bureaucrat& bureaucrat);
    void              execute(Bureaucrat const & executor) const;

};

std::ostream	&operator<<(std::ostream &out, AForm const &form);

#endif
