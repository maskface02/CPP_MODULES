/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:58:10 by zatais            #+#    #+#             */
/*   Updated: 2026/01/16 10:58:10 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat {
  private:
    const std::string name;
    int grade;
  
  public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& otherObj);
    Bureaucrat(const std::string n, int g);
    Bureaucrat& operator=(const Bureaucrat& otherObj);

    void         incrementGrade();
    void         decrementGrade();
    std::string  getName() const;
    int          getGrade() const;

    class GradeTooHighException : public std::exception {
      public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
      public:
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif
